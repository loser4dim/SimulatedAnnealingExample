#pragma once

#include <cstddef>


namespace loser4dim
{
    template<std::size_t N>
    class AnnealingFurnace
    {
    private:
        constexpr const std::double_t DEFAULT_INIT_TEMPERATURE_ = 100.0;
        constexpr const std::double_t DEFAULT_COOLING_RATE_     = 0.99;
        constexpr const std::double_t DEFAULT_ACCEPT_RATE

        constexpr const std::size_t DEFAULT_LOOP_MAX _= 10000;



    private:
        std::double_t temperature_  = DEFAULT_INIT_TEMPERATURE_;
        const std::double_t cooling_rate_ = DEFAULT_COOLING_RATE_;

        const std::size_t loop_max_ = 10000;


    public:
        std::array<std::size_t, N> optimize(const std::array<std::size_t, N>& init_solution, const std::array<std::array<std::size_t, N>, N>& route_distance, const std::array<std::size_t, N>& entrance_distance)
        {

        }


        std::array<std::size_t, N> anneal(const std::array<std::size_t, N>& init_solution, const std::array<std::array<std::size_t, N>, N>& route_distance, const std::array<std::size_t, N>& entrance_distance)
        {
            
        }


    private:
        std::double_t evaluateSolution(const std::array<std::size_t, N>& solution, const std::array<std::array<std::size_t, N>, N>& route_distance, const std::array<std::size_t, N>& entrance_distance)
        {
            std::double_t total_distance = entrance_distance[solution.front()];
            for (std::size_t i = 0; i < solution.size() - 1; ++i)
            {
                total_distance += route_distance[solution[i]][solution[i + 1]];
            }
            total_distance += entrance_distance[solution.back()];
            return total_distance;
        }




        void update()
        {
            temperature_ *= cooling_rate_;
            return;
        }
    };
}