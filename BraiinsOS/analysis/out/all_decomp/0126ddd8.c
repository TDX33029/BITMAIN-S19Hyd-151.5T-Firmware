// FUN_0126ddd8 @ 0126ddd8 size=408 calls_out=8 calls_in=4
// strings: 

void FUN_0126ddd8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_100 [112];
  undefined2 local_90 [56];
  
  iVar1 = FUN_016d997a(1,0x80801,0);
  if (iVar1 < 0) {
    puVar4 = (undefined4 *)FUN_016d2bc8();
    uVar6 = *puVar4;
    *param_1 = 0;
    param_1[1] = uVar6;
    return;
  }
  FUN_016dd606((uint)local_90 | 2,0,0x6c);
  local_90[0] = 1;
  pcVar7 = (char *)((int)param_2 + 6);
  iVar2 = *param_2;
  iVar9 = 2;
  uVar8 = iVar2 - 2;
  if (uVar8 != 0) {
    if (*pcVar7 == '\0') {
      if (0x6c < uVar8) {
        iVar3 = 1;
        puVar5 = &DAT_018aabc4;
        goto LAB_0126df64;
      }
      if (*pcVar7 != '\0') goto LAB_0126deb4;
      pcVar7 = (char *)((int)param_2 + 7);
      iVar3 = 1;
    }
    else {
      uVar8 = iVar2 - 3;
      iVar3 = 0;
      if (0x6c < uVar8) {
        puVar5 = &DAT_018aabd4;
LAB_0126df64:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(iVar3,uVar8,0x6c,puVar5);
      }
    }
    iVar2 = iVar2 + -3;
    FUN_016dd1aa(((uint)local_90 | 2) + iVar3,pcVar7,iVar2);
    if (iVar2 != 0) {
      iVar9 = 3;
      if (*pcVar7 == '\0') {
        iVar9 = 2;
      }
      iVar9 = iVar9 + iVar2;
    }
  }
LAB_0126deb4:
  FUN_016dd1aa(auStack_100,local_90,0x6e);
  FUN_016dd1aa(local_90,auStack_100,0x6e);
  iVar2 = FUN_016d6eba(iVar1,local_90,iVar9);
  if ((iVar2 < 0) || (iVar2 = FUN_016d7b90(iVar1,0xffffffff), iVar2 < 0)) {
    puVar4 = (undefined4 *)FUN_016d2bc8();
    uVar6 = *puVar4;
    FUN_016dffb2(iVar1);
    *param_1 = 0;
    param_1[1] = uVar6;
    return;
  }
  param_1[1] = iVar1;
  *(undefined1 *)param_1 = 4;
  return;
}

