// FUN_012349b0 @ 012349b0 size=268 calls_out=4 calls_in=1
// strings: 

void FUN_012349b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar4 = FUN_0123ab30(param_2,param_3,&DAT_003e8611,6);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  puVar1[2] = 0x7265746e;
  puVar1[1] = 0x696f702d;
  *puVar1 = 0x6e6f736a;
  local_38 = CONCAT31(local_38._1_3_,3);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = local_38;
  puVar2[3] = 0xc;
  puVar2[4] = puVar1;
  puVar2[5] = 0xc;
  puVar2[6] = uStack_28;
  puVar2[7] = uStack_24;
  puVar3 = (undefined8 *)thunk_FUN_016d4a50(0xc);
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar3 = uVar4;
  *(undefined4 **)(puVar3 + 1) = puVar2;
  *param_1 = (int)puVar3;
  param_1[1] = (int)&DAT_0188a8a8;
  return;
}

