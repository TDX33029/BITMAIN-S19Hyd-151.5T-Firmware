// FUN_01388c88 @ 01388c88 size=68 calls_out=1 calls_in=3
// strings: assertion failed: self.can_inc_num_local_error_resets()PROTOCOL_ERRORINTERNAL_ERRORFLOW_CONTROL_ERRORSTREAM_CLOSEDREFUSED_STREAMCANCELCOMPRESSION_ERRORCONNECT_ERRORENHANCE_YOUR_CALMINADEQUATE_SECURITYHTTP_1_1_REQUIRED

void FUN_01388c88(int *param_1)

{
  if ((*param_1 == 1) && ((uint)param_1[1] <= (uint)param_1[10])) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: self.can_inc_num_local_error_resets()PROTOCOL_ERRORINTERNAL_ERRORFLOW_CONTROL_ERRORSTREAM_CLOSEDREFUSED_STREAMCANCELCOMPRESSION_ERRORCONNECT_ERRORENHANCE_YOUR_CALMINADEQUATE_SECURITYHTTP_1_1_REQUIRED"
                 ,0x37,&DAT_01cebf50);
  }
  param_1[10] = param_1[10] + 1;
  return;
}

