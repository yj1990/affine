/* Header for C extensions */

/* .... Python callable functions ..................*/
static PyObject *gen_pred_coef(PyObject *self, PyObject *args);

/*  Matrix utility functions */

void mat_sum(int rows, int cols, double *arr1, double *arr2, 
             double *result);
void mat_subtract(int rows, int cols, double *arr1, double *arr2, 
                  double *result);
void mat_prodct(int row1, int col1, double *arr1, 
                int col2, double *arr2, 
                double *result);
void mat_prodct_tpose1(int row1, int col1, double *arr1, 
                       int col2, double *arr2, 
                       double *result);
void mat_prodct_tpose2(int row1, int col1, double *arr1,
                       int row2, double *arr2,
                       double *result);

/* .... C matrix utility functions ..................*/
PyArrayObject *pymatrix(PyObject *objin);
double *pymatrix_to_Carrayptrs(PyArrayObject *arrayin);
void free_Carrayptrs(double **v, int rows);
void free_CarrayfPy(double **v);