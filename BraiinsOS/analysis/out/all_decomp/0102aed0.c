// FUN_0102aed0 @ 0102aed0 size=176 calls_out=2 calls_in=1
// strings: assertion failed: self.ref_count < usize::MAXheader_table_sizeenable_pushmax_concurrent_streamsinitial_window_sizemax_frame_sizemax_header_list_sizeenable_connect_protocolACK

void FUN_0102aed0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iStack_1c;
  int *local_18;
  code *local_14;
  
  uVar1 = param_3[1];
  iStack_1c = param_3[2];
  if (((*(uint *)(*param_3 + 0x38) <= uVar1) ||
      (piVar3 = (int *)(*(int *)(*param_3 + 0x34) + uVar1 * 0xf8), *piVar3 == 3 && piVar3[1] == 0))
     || (piVar3[0x35] != iStack_1c)) {
    local_18 = &iStack_1c;
    local_14 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_18,&DAT_01882560,FUN_0101a4ac,uVar1);
  }
  iVar2 = piVar3[0x36];
  if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.ref_count < usize::MAXheader_table_sizeenable_pushmax_concurrent_streamsinitial_window_sizemax_frame_sizemax_header_list_sizeenable_connect_protocolACK"
                 ,0x2d,&DAT_01882c80);
  }
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = iStack_1c;
  piVar3[0x36] = iVar2 + 1;
  return;
}

