// FUN_015a4898 @ 015a4898 size=268 calls_out=5 calls_in=1
// strings: 

void FUN_015a4898(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar4 = FUN_015345a4(param_2,param_3,&DAT_004e94a9,6);
  iVar1 = thunk_FUN_01be5118(0x15);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x15);
  }
  FUN_01bed4e2(iVar1,&DAT_004a6d10,0x15);
  local_38 = CONCAT31(local_38._1_3_,3);
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x20);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = local_38;
  puVar2[3] = 0x15;
  puVar2[4] = iVar1;
  puVar2[5] = 0x15;
  puVar2[6] = uStack_28;
  puVar2[7] = uStack_24;
  puVar3 = (undefined8 *)thunk_FUN_01be5118(0xc);
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar3 = uVar4;
  *(undefined4 **)(puVar3 + 1) = puVar2;
  *param_1 = (int)puVar3;
  param_1[1] = (int)&DAT_01cfc5a0;
  return;
}

