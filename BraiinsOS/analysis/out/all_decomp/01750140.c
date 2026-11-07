// FUN_01750140 @ 01750140 size=348 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_rsa.c

void FUN_01750140(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined **extraout_r1;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int local_28;
  undefined4 local_24;
  undefined **local_20;
  uint local_1c;
  
  ppuVar5 = &PTR_018bc3f4;
  local_1c = DAT_018ddaf8;
  local_20 = (undefined **)0x0;
  local_24 = 0;
  iVar6 = param_1[5];
  if ((*(int *)*param_1 == 0x390) && (param_1[2] != 0)) {
    iVar7 = *(int *)(param_1[2] + 8);
    if (*(int *)(iVar7 + 0x24) == 0) {
LAB_0175026c:
      uVar1 = 1;
      goto LAB_017501d0;
    }
    uVar8 = FUN_0177f648(*(int *)(iVar7 + 0x24),&local_20,&local_24,&local_28);
    ppuVar5 = (undefined **)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      iVar2 = FUN_0175009c(iVar7);
      iVar3 = FUN_0172a898(local_20);
      uVar4 = FUN_0174ecf4(iVar7);
      if ((uVar4 & 7) == 1) {
        iVar7 = (iVar2 - iVar3) + -3;
      }
      else {
        iVar7 = (iVar2 - iVar3) + -2;
      }
      if (local_28 <= iVar7) {
        *(undefined ***)(iVar6 + 0xc) = local_20;
        *(undefined4 *)(iVar6 + 0x10) = local_24;
        *(int *)(iVar6 + 0x14) = local_28;
        *(int *)(iVar6 + 0x18) = local_28;
        ppuVar5 = local_20;
        goto LAB_0175026c;
      }
      FUN_016e9cd0(6,0,0x1f5,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x6f);
      ppuVar5 = extraout_r1;
    }
  }
  uVar1 = 0;
LAB_017501d0:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar1,ppuVar5,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

