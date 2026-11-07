// FUN_01b4d068 @ 01b4d068 size=456 calls_out=6 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/kem/kem.c | /aws-lc/crypto/fipsmodule/kem/kem.c | /aws-lc/crypto/fipsmodule/kem/kem.c | /aws-lc/crypto/fipsmodule/kem/kem.c

void FUN_01b4d068(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  
  local_24 = DAT_01d53560;
  if ((param_2 == 0 || param_1 == (int *)0x0) || (*param_1 == 0)) {
    uVar6 = 0x136;
    uVar4 = 0x43;
LAB_01b4d0cc:
    FUN_01b053d4(0xe,0,uVar4,"/aws-lc/crypto/fipsmodule/kem/kem.c",uVar6);
    iVar1 = extraout_r1;
  }
  else {
    if ((param_1[1] != 0) || (param_1[2] != 0)) {
      uVar6 = 0x13c;
      uVar4 = 0x42;
      goto LAB_01b4d0cc;
    }
    iVar1 = FUN_01afd684(param_2);
    if (iVar1 != *(int *)(*param_1 + 0x20)) {
      uVar6 = 0x142;
      uVar4 = 0x45;
      goto LAB_01b4d0cc;
    }
    iVar2 = FUN_01b6ad8c(*(undefined4 *)(*param_1 + 0x10));
    iVar3 = FUN_01b6ad8c(*(undefined4 *)(*param_1 + 0x14));
    if (iVar3 != 0 && iVar2 != 0) {
      iVar1 = *param_1;
      local_2c = *(undefined4 *)(iVar1 + 0x10);
      local_28 = *(undefined4 *)(iVar1 + 0x14);
      pcVar5 = (code *)**(undefined4 **)(iVar1 + 0x28);
      uVar4 = FUN_01afd674(param_2);
      iVar1 = (*pcVar5)(iVar2,&local_2c,iVar3,&local_28,uVar4);
      if (iVar1 != 0) {
        uVar4 = 1;
        param_1[1] = iVar2;
        param_1[2] = iVar3;
        goto LAB_01b4d0dc;
      }
      FUN_01b053d4(6,0,0x44,"/aws-lc/crypto/fipsmodule/kem/kem.c",0x157);
    }
    FUN_01b6b1c4(iVar2);
    FUN_01b6b1c4(iVar3);
    iVar1 = extraout_r1_00;
  }
  uVar4 = 0;
LAB_01b4d0dc:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar4,iVar1,local_24 ^ DAT_01d53560,0);
  }
  return;
}

