// FUN_00953db0 @ 00953db0 size=500 calls_out=2 calls_in=5
// strings: 

void FUN_00953db0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  
  if (*param_2 == 1) {
    FUN_00d97eb0(param_1,param_2 + 2,param_2[0xc],param_2[0xd],param_2[0xe],param_2[0xf],
                 param_2[9] == -1);
    return;
  }
  if (*(char *)((int)param_2 + 0xe) != '\0') {
LAB_00953e58:
    *param_1 = 0;
    return;
  }
  uVar1 = param_2[1];
  bVar8 = *(byte *)(param_2 + 3);
  iVar7 = param_2[0xc];
  uVar2 = param_2[0xd];
  if (uVar1 != 0) {
    if (uVar1 < uVar2) {
      if (*(char *)(iVar7 + uVar1) < -0x40) goto LAB_00953f80;
    }
    else if (uVar1 != uVar2) goto LAB_00953f80;
  }
  if (uVar1 == uVar2) {
    *(byte *)(param_2 + 3) = ~bVar8 & 1;
    if ((bVar8 & 1) == 0) {
      *(undefined1 *)((int)param_2 + 0xe) = 1;
      goto LAB_00953e58;
    }
    goto LAB_00953f64;
  }
  pbVar3 = (byte *)(iVar7 + uVar1);
  uVar6 = (uint)*pbVar3;
  if ((uint)(int)(char)*pbVar3 < 0x80000000) {
joined_r0x00953ec8:
    if ((bVar8 & 1) != 0) goto LAB_00953f58;
LAB_00953ecc:
    iVar4 = 1;
    if (0x7f < uVar6) {
      iVar4 = 2;
    }
    if (uVar6 < 0x800) {
      uVar1 = iVar4 + uVar1;
      param_2[1] = uVar1;
    }
    else {
      iVar4 = 4;
      if (uVar6 < 0x10000) {
        iVar4 = 3;
      }
      uVar1 = iVar4 + uVar1;
      param_2[1] = uVar1;
    }
    if (uVar1 != 0) {
      if (uVar1 < uVar2) {
        if (*(char *)(iVar7 + uVar1) < -0x40) {
LAB_00953f7c:
          bVar8 = 1;
LAB_00953f80:
          *(byte *)(param_2 + 3) = ~bVar8 & 1;
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar7,uVar2,uVar1,uVar2,&DAT_018aeb58);
        }
      }
      else if (uVar1 != uVar2) goto LAB_00953f7c;
    }
    if (uVar1 != uVar2) goto LAB_00953f58;
  }
  else {
    if (uVar6 < 0xe0) {
      uVar6 = pbVar3[1] & 0x3f | (uVar6 & 0x1f) << 6;
      goto joined_r0x00953ec8;
    }
    uVar5 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
    if (uVar6 < 0xf0) {
      uVar6 = uVar5 | (uVar6 & 0x1f) << 0xc;
      goto joined_r0x00953ec8;
    }
    uVar6 = pbVar3[3] & 0x3f | uVar5 << 6 | (uVar6 & 7) << 0x12;
    if ((bVar8 & 1) == 0) goto LAB_00953ecc;
LAB_00953f58:
    uVar2 = uVar1;
  }
  *(undefined1 *)(param_2 + 3) = 0;
LAB_00953f64:
  param_1[1] = uVar2;
  param_1[2] = uVar2;
  *param_1 = 1;
  return;
}

