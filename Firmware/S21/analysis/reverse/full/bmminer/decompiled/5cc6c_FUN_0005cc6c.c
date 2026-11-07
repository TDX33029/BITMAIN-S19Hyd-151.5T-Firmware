// FUN_0005cc6c @ 0005cc6c  size=536  callers=1
// program: bmminer


void FUN_0005cc6c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int param3;
  int param3_00;
  undefined *local_2028 [2049];
  
  if (4 < DAT_000be63c) {
    snprintf((char *)local_2028,0x2000,"[DEBUG] Dump freq table, chain = %d.\n",param_1);
    FUN_0004948c(4,local_2028,0);
  }
  param3_00 = 0;
  do {
    iVar1 = FUN_0002a6f0(param3_00);
    if ((iVar1 != 0) && (param_1 == 0xff || param_1 == param3_00)) {
      if (3 < DAT_000be63c) {
        memset(local_2028,0,0x2000);
        snprintf((char *)local_2028,0x2000,"chain = %d\n",param3_00);
        FUN_0004a3a4(3,local_2028,0);
      }
      iVar1 = FUN_0002a514();
      if (iVar1 != 0) {
        param3 = 0;
        do {
          if (3 < DAT_000be63c) {
            memset(local_2028,0,0x2000);
            snprintf((char *)local_2028,0x2000,"[%3d]:%-3d",param3,
                     *(int *)(param_2 + param3_00 * 0x400 + param3 * 4));
            FUN_0004a3a4(3,local_2028,0);
            if (3 < DAT_000be63c) {
              memset(local_2028,0,0x2000);
              local_2028[0] = &DAT_00202020;
              FUN_0004a3a4(3,local_2028,0);
            }
          }
          param3 = param3 + 1;
          uVar2 = FUN_0002a524();
          FUN_0009863c(param3,uVar2);
          if ((extraout_r1 == 0) && (3 < DAT_000be63c)) {
            memset(local_2028,0,0x2000);
            local_2028[0] = (undefined *)CONCAT22(local_2028[0]._2_2_,10);
            FUN_0004a3a4(3,local_2028,0);
          }
        } while (iVar1 != param3);
      }
      if (3 < DAT_000be63c) {
        memset(local_2028,0,0x2000);
        local_2028[0] = (undefined *)CONCAT22(local_2028[0]._2_2_,10);
        FUN_0004a3a4(3,local_2028,0);
      }
    }
    param3_00 = param3_00 + 1;
  } while (param3_00 != 4);
  return;
}

