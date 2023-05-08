
// Code generated by stanc v2.29.2
#include <stan/model/model_header.hpp>
namespace auto_co_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 11> locations_array__ = 
{" (found before start of program)",
 " (in '/home/mahdi/HD2/package_dev/LIM_LyTomo/notebooks/stan/auto_co.stan', line 10, column 4 to column 30)",
 " (in '/home/mahdi/HD2/package_dev/LIM_LyTomo/notebooks/stan/auto_co.stan', line 11, column 4 to column 19)",
 " (in '/home/mahdi/HD2/package_dev/LIM_LyTomo/notebooks/stan/auto_co.stan', line 16, column 4 to column 72)",
 " (in '/home/mahdi/HD2/package_dev/LIM_LyTomo/notebooks/stan/auto_co.stan', line 3, column 4 to column 10)",
 " (in '/home/mahdi/HD2/package_dev/LIM_LyTomo/notebooks/stan/auto_co.stan', line 4, column 11 to column 12)",
 " (in '/home/mahdi/HD2/package_dev/LIM_LyTomo/notebooks/stan/auto_co.stan', line 4, column 4 to column 17)",
 " (in '/home/mahdi/HD2/package_dev/LIM_LyTomo/notebooks/stan/auto_co.stan', line 5, column 11 to column 12)",
 " (in '/home/mahdi/HD2/package_dev/LIM_LyTomo/notebooks/stan/auto_co.stan', line 5, column 4 to column 21)",
 " (in '/home/mahdi/HD2/package_dev/LIM_LyTomo/notebooks/stan/auto_co.stan', line 6, column 11 to column 12)",
 " (in '/home/mahdi/HD2/package_dev/LIM_LyTomo/notebooks/stan/auto_co.stan', line 6, column 4 to column 27)"};




class auto_co_model final : public model_base_crtp<auto_co_model> {

 private:
  int N;
  Eigen::Matrix<double, -1, 1> pm__;
  Eigen::Matrix<double, -1, 1> lim_pk__;
  Eigen::Matrix<double, -1, 1> sigma_lim_pk__; 
  Eigen::Map<Eigen::Matrix<double, -1, 1>> pm{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double, -1, 1>> lim_pk{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double, -1, 1>> sigma_lim_pk{nullptr, 0};
 
 public:
  ~auto_co_model() { }
  
  inline std::string model_name() const final { return "auto_co_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.2", "stancflags = "};
  }
  
  
  auto_co_model(stan::io::var_context& context__,
                unsigned int random_seed__ = 0,
                std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "auto_co_model_namespace::auto_co_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 4;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 4;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 5;
      stan::math::validate_non_negative_index("pm", "N", N);
      current_statement__ = 6;
      context__.validate_dims("data initialization","pm","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      pm__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&pm) Eigen::Map<Eigen::Matrix<double, -1, 1>>(pm__.data(), N);
      
      {
        std::vector<local_scalar_t__> pm_flat__;
        current_statement__ = 6;
        pm_flat__ = context__.vals_r("pm");
        current_statement__ = 6;
        pos__ = 1;
        current_statement__ = 6;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 6;
          stan::model::assign(pm, pm_flat__[(pos__ - 1)],
            "assigning variable pm", stan::model::index_uni(sym1__));
          current_statement__ = 6;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 7;
      stan::math::validate_non_negative_index("lim_pk", "N", N);
      current_statement__ = 8;
      context__.validate_dims("data initialization","lim_pk","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      lim_pk__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&lim_pk) Eigen::Map<Eigen::Matrix<double, -1, 1>>(lim_pk__.data(), N);
        
      
      {
        std::vector<local_scalar_t__> lim_pk_flat__;
        current_statement__ = 8;
        lim_pk_flat__ = context__.vals_r("lim_pk");
        current_statement__ = 8;
        pos__ = 1;
        current_statement__ = 8;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 8;
          stan::model::assign(lim_pk, lim_pk_flat__[(pos__ - 1)],
            "assigning variable lim_pk", stan::model::index_uni(sym1__));
          current_statement__ = 8;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 9;
      stan::math::validate_non_negative_index("sigma_lim_pk", "N", N);
      current_statement__ = 10;
      context__.validate_dims("data initialization","sigma_lim_pk","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      sigma_lim_pk__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&sigma_lim_pk) Eigen::Map<Eigen::Matrix<double, -1, 1>>(sigma_lim_pk__.data(), N);
        
      
      {
        std::vector<local_scalar_t__> sigma_lim_pk_flat__;
        current_statement__ = 10;
        sigma_lim_pk_flat__ = context__.vals_r("sigma_lim_pk");
        current_statement__ = 10;
        pos__ = 1;
        current_statement__ = 10;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 10;
          stan::model::assign(sigma_lim_pk, sigma_lim_pk_flat__[(pos__ - 1)],
            "assigning variable sigma_lim_pk", stan::model::index_uni(sym1__));
          current_statement__ = 10;
          pos__ = (pos__ + 1);
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "auto_co_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      local_scalar_t__ clustering = DUMMY_VAR__;
      current_statement__ = 1;
      clustering = in__.template read_constrain_lb<local_scalar_t__, 
                     jacobian__>(0, lp__);
      local_scalar_t__ pshot_lim = DUMMY_VAR__;
      current_statement__ = 2;
      pshot_lim = in__.template read<local_scalar_t__>();
      {
        current_statement__ = 3;
        lp_accum__.add(
          stan::math::normal_lpdf<propto__>(lim_pk,
            stan::math::add(
              stan::math::multiply(stan::math::multiply(pm, clustering),
                clustering), pshot_lim), sigma_lim_pk));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "auto_co_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      double clustering = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      clustering = in__.template read_constrain_lb<local_scalar_t__, 
                     jacobian__>(0, lp__);
      double pshot_lim = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      pshot_lim = in__.template read<local_scalar_t__>();
      out__.write(clustering);
      out__.write(pshot_lim);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ clustering = DUMMY_VAR__;
      clustering = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, clustering);
      local_scalar_t__ pshot_lim = DUMMY_VAR__;
      pshot_lim = in__.read<local_scalar_t__>();
      out__.write(pshot_lim);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"clustering", "pshot_lim"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
      std::vector<size_t>{}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "clustering");
    param_names__.emplace_back(std::string() + "pshot_lim");
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "clustering");
    param_names__.emplace_back(std::string() + "pshot_lim");
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"clustering\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"pshot_lim\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"clustering\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"pshot_lim\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  (1 + 1);
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 0;
      std::vector<double> vars_vec(num_params__
       + (emit_transformed_parameters * num_transformed)
       + (emit_generated_quantities * num_gen_quantities));
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        vars_vec.data(), vars_vec.size());
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  (1 + 1);
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 0;
      vars.resize(num_params__
        + (emit_transformed_parameters * num_transformed)
        + (emit_generated_quantities * num_gen_quantities));
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 2> names__{"clustering", "pshot_lim"};
      const std::array<Eigen::Index, 2> constrain_param_sizes__{1, 1};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
    
};
}
using stan_model = auto_co_model_namespace::auto_co_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return auto_co_model_namespace::profiles__;
}

#endif


