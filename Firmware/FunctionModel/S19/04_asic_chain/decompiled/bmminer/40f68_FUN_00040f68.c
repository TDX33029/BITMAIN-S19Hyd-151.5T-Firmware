// FUN_00040f68 @ 00040f68  size=448  callers=1
// program: bmminer


void FUN_00040f68(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int param3;
  int param3_00;
  undefined *local_828 [513];
  
  if (4 < DAT_00087bbc) {
    snprintf((char *)local_828,0x800,"[DEBUG] Dump freq table, chain = %d.\n",param_1);
    FUN_00032218(4,local_828,0);
  }
  param3_00 = 0;
  do {
    iVar1 = FUN_000201d8(param3_00);
    if ((iVar1 != 0) && (param_1 == 0xff || param_1 == param3_00)) {
      if (3 < DAT_00087bbc) {
        snprintf((char *)local_828,0x800,"chain = %d\n",param3_00);
        FUN_00032eb0(3,local_828,0);
      }
      iVar1 = FUN_0002002c();
      if (iVar1 != 0) {
        param3 = 0;
        do {
          if (3 < DAT_00087bbc) {
            snprintf((char *)local_828,0x800,"[%3d]:%-3d",param3,
                     *(int *)(param_2 + param3_00 * 0x400 + param3 * 4));
            FUN_00032eb0(3,local_828,0);
            if (3 < DAT_00087bbc) {
              local_828[0] = &DAT_00202020;
              FUN_00032eb0(3,local_828,0);
            }
          }
          param3 = param3 + 1;
          uVar2 = FUN_0002003c();
          FUN_000673ec(param3,uVar2);
          if ((extraout_r1 == 0) && (3 < DAT_00087bbc)) {
            local_828[0] = (undefined *)CONCAT22(local_828[0]._2_2_,10);
            FUN_00032eb0(3,local_828);
          }
        } while (iVar1 != param3);
      }
      if (3 < DAT_00087bbc) {
        local_828[0] = (undefined *)CONCAT22(local_828[0]._2_2_,10);
        FUN_00032eb0(3,local_828,0);
      }
    }
    param3_00 = param3_00 + 1;
  } while (param3_00 != 4);
  return;
}

