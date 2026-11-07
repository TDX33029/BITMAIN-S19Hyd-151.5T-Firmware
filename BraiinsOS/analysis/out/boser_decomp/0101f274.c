// FUN_0101f274 @ 0101f274 size=216 calls_out=4 calls_in=1
// strings: 

void FUN_0101f274(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [80];
  
  iVar3 = *param_1;
  puVar4 = (undefined4 *)param_1[1];
  iVar1 = puVar4[1];
  iVar2 = puVar4[2];
  *param_1 = 1;
  param_1[1] = (int)&DAT_01c1d674;
  if (iVar1 == 0x50 && iVar2 == 4) {
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(iVar3);
    }
    FUN_01bed4e2(iVar3,param_2,0x50);
    FUN_01139b38(1,&DAT_01c1d674);
  }
  else {
    FUN_01139b38(iVar3,puVar4);
    FUN_01bed4e2(auStack_68,param_2,0x50);
    iVar3 = thunk_FUN_01be5118(0x50);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x50);
    }
    FUN_01bed4e2(iVar3,param_2,0x50);
    FUN_01139b38(1,&DAT_01c1d674);
  }
  *param_1 = iVar3;
  param_1[1] = (int)&DAT_01c1d654;
  return;
}

