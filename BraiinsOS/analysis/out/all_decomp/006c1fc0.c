// FUN_006c1fc0 @ 006c1fc0 size=228 calls_out=5 calls_in=1
// strings: 

void FUN_006c1fc0(int *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int extraout_r1;
  int local_1c;
  
  uVar2 = (**(code **)(param_3 + 0x30))(param_2 + (*(int *)(param_3 + 8) - 1U & 0xfffffff8) + 8);
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7c58(&DAT_01858b20);
  }
  FUN_0184606c(0x10000,param_4);
  local_1c = extraout_r1;
  if (extraout_r1 != 0) {
    FUN_015fef84(0,&local_1c,&DAT_00568f30,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x6c20a4);
    (*pcVar1)();
  }
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  puVar3[2] = 0;
  *puVar3 = 1;
  puVar3[1] = 1;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = (int)puVar3;
  param_1[3] = -0x10000;
  param_1[4] = param_4;
  param_1[5] = param_4;
  param_1[6] = uVar2 & 0xe0001fff;
  return;
}

