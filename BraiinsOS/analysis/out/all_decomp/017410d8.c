// FUN_017410d8 @ 017410d8 size=480 calls_out=6 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/kem/kem.c | /aws-lc/crypto/fipsmodule/kem/kem.c | /aws-lc/crypto/fipsmodule/kem/kem.c | /aws-lc/crypto/fipsmodule/kem/kem.c

void FUN_017410d8(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  code *pcVar5;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  if ((param_2 == 0 || param_1 == (int *)0x0) || (*param_1 == 0)) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/kem/kem.c",0x136);
    iVar2 = extraout_r1_00;
  }
  else if ((param_1[1] == 0) && (param_1[2] == 0)) {
    iVar2 = FUN_016e1e1c(param_2);
    if (iVar2 == *(int *)(*param_1 + 0x20)) {
      iVar3 = FUN_0177a6c0(*(undefined4 *)(*param_1 + 0x10));
      iVar4 = FUN_0177a6c0(*(undefined4 *)(*param_1 + 0x14));
      if (iVar4 != 0 && iVar3 != 0) {
        iVar2 = *param_1;
        local_24 = *(undefined4 *)(iVar2 + 0x10);
        local_20 = *(undefined4 *)(iVar2 + 0x14);
        pcVar5 = (code *)**(undefined4 **)(iVar2 + 0x28);
        uVar1 = FUN_016e1e04(param_2);
        iVar2 = (*pcVar5)(iVar3,&local_24,iVar4,&local_20,uVar1);
        if (iVar2 != 0) {
          uVar1 = 1;
          param_1[1] = iVar3;
          param_1[2] = iVar4;
          goto LAB_01741164;
        }
        FUN_016e9cd0(6,0,0x44,"/aws-lc/crypto/fipsmodule/kem/kem.c",0x157);
      }
      FUN_0177aafc(iVar3);
      FUN_0177aafc(iVar4);
      iVar2 = extraout_r1_02;
    }
    else {
      FUN_016e9cd0(0xe,0,0x45,"/aws-lc/crypto/fipsmodule/kem/kem.c",0x142);
      iVar2 = extraout_r1_01;
    }
  }
  else {
    FUN_016e9cd0(0xe,0,0x42,"/aws-lc/crypto/fipsmodule/kem/kem.c",0x13c);
    iVar2 = extraout_r1;
  }
  uVar1 = 0;
LAB_01741164:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar1,iVar2,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

