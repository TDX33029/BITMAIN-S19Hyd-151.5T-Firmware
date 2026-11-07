// FUN_0071f090 @ 0071f090 size=260 calls_out=2 calls_in=1
// strings: 

void FUN_0071f090(undefined1 *param_1,uint *param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar11 = CONCAT44(param_4,param_3);
  if ((char)param_2[0xe] != '\0') {
    *param_1 = 0x4f;
    return;
  }
  uVar8 = (uint)*(byte *)(param_5 + 0xa2);
  bVar1 = *(byte *)(param_5 + 0xa1);
  if (uVar8 == 1) {
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013079d0(&DAT_01c07830);
    }
    uVar10 = param_2[2] + param_3;
    iVar9 = param_2[3] + param_4 + (uint)CARRY4(param_2[2],param_3);
    uVar11 = FUN_01bf0ff0(uVar10,iVar9,uVar8,0);
    lVar2 = (ulonglong)uVar8 * (uVar11 & 0xffffffff);
    uVar3 = (uint)lVar2;
    param_2[2] = uVar10 - uVar3;
    param_2[3] = iVar9 - ((int)(uVar11 >> 0x20) * uVar8 + (int)((ulonglong)lVar2 >> 0x20) +
                         (uint)(uVar10 < uVar3));
  }
  lVar2 = (ulonglong)(uint)bVar1 * (uVar11 & 0xffffffff);
  uVar8 = (uint)lVar2;
  uVar10 = (int)(uVar11 >> 0x20) * (uint)bVar1 + (int)((ulonglong)lVar2 >> 0x20);
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar3 = uVar8 + uVar6;
  uVar4 = uVar10 + uVar7 + (uint)CARRY4(uVar8,uVar6);
  if (!CARRY4(uVar10,uVar7) && !CARRY4(uVar10 + uVar7,(uint)CARRY4(uVar8,uVar6))) {
    uVar6 = (uint)*(byte *)(param_5 + 0x90) * -8 & 0x38;
    uVar10 = 0xffffffff;
    uVar8 = 0xffffffff >> uVar6;
    uVar6 = uVar6 - 0x20;
    if (-1 < (int)uVar6) {
      uVar8 = 0;
      uVar10 = 0xffffffff >> (uVar6 & 0xff);
    }
    if (uVar4 < uVar8 || uVar8 - uVar4 < (uint)(uVar3 <= uVar10)) {
      uVar5 = 0x4f;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      goto LAB_0071f180;
    }
  }
  uVar5 = 0x34;
  *(uint *)(param_1 + 8) = uVar3;
  *(uint *)(param_1 + 0xc) = uVar4;
LAB_0071f180:
  *param_1 = uVar5;
  return;
}

