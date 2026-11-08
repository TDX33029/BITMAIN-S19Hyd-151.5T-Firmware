// FUN_006fda48 @ 006fda48 size=780 calls_out=7 calls_in=1
// strings: 

void FUN_006fda48(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_40;
  undefined1 *local_3c;
  int local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_3c = (undefined1 *)thunk_FUN_016d4a50(0x80);
  if (local_3c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  iVar9 = param_2[3];
  puVar7 = (uint *)*param_2;
  *local_3c = 0x7b;
  local_38 = 1;
  local_34 = &local_40;
  local_40 = 0x80;
  if (iVar9 == 0) {
LAB_006fdcac:
    piVar1 = local_34;
    iVar9 = local_34[2];
    if (*local_34 == iVar9) {
      FUN_006bca64(local_34,iVar9,1,1,1);
      iVar9 = piVar1[2];
    }
    *(undefined1 *)(piVar1[1] + iVar9) = 0x7d;
    piVar1[2] = iVar9 + 1;
    *param_1 = local_40;
    param_1[1] = (int)local_3c;
    param_1[2] = local_38;
    return;
  }
  uVar3 = *puVar7;
  puVar6 = puVar7;
  while( true ) {
    puVar6 = puVar6 + 1;
    if ((uVar3 & 0x80808080) != 0x80808080) break;
    uVar3 = *puVar6;
    puVar7 = puVar7 + -0x28;
  }
  uVar8 = uVar3 & 0x80808080 ^ 0x80808080;
  uVar3 = (uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                        uVar8 >> 0x18) >> 3;
  FUN_007536f4(&local_30,&local_40,puVar7[uVar3 * -10 + -9],puVar7[uVar3 * -10 + -8]);
  piVar1 = local_34;
  if ((char)local_30 == '\x04') {
    iVar4 = local_34[2];
    if (*local_34 == iVar4) {
      FUN_006bca64(local_34,iVar4,1,1,1);
      iVar4 = piVar1[2];
    }
    *(undefined1 *)(piVar1[1] + iVar4) = 0x3a;
    piVar1[2] = iVar4 + 1;
    iVar4 = FUN_007929b8(puVar7 + uVar3 * -10 + -6,&local_34);
    if (iVar4 == 0) {
      uVar8 = uVar8 - 1 & uVar8;
      do {
        piVar1 = local_34;
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) goto LAB_006fdcac;
        puVar5 = puVar6;
        if (uVar8 == 0) {
          do {
            puVar6 = puVar5 + 1;
            uVar3 = *puVar5;
            puVar7 = puVar7 + -0x28;
            puVar5 = puVar6;
          } while ((uVar3 & 0x80808080) == 0x80808080);
          uVar8 = uVar3 & 0x80808080 ^ 0x80808080;
        }
        uVar3 = (uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                              (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
        iVar4 = local_34[2];
        uVar11 = puVar7[uVar3 * -10 + -9];
        uVar10 = puVar7[uVar3 * -10 + -8];
        if (*local_34 == iVar4) {
          FUN_006bca64(local_34,iVar4,1,1,1);
          iVar4 = piVar1[2];
        }
        piVar2 = local_34;
        *(undefined1 *)(piVar1[1] + iVar4) = 0x2c;
        piVar1[2] = iVar4 + 1;
        FUN_007536f4(&local_30,piVar2,uVar11,uVar10);
        piVar1 = local_34;
        if ((char)local_30 != '\x04') goto LAB_006fdcf4;
        iVar4 = local_34[2];
        if (*local_34 == iVar4) {
          FUN_006bca64(local_34,iVar4,1,1,1);
          iVar4 = piVar1[2];
        }
        *(undefined1 *)(piVar1[1] + iVar4) = 0x3a;
        piVar1[2] = iVar4 + 1;
        iVar4 = FUN_007929b8(puVar7 + uVar3 * -10 + -6,&local_34);
        uVar8 = uVar8 - 1 & uVar8;
      } while (iVar4 == 0);
    }
  }
  else {
LAB_006fdcf4:
    iVar4 = FUN_0157c4a0(local_30,local_2c);
  }
  *param_1 = -0x80000000;
  param_1[1] = iVar4;
  if (local_40 != 0) {
    thunk_FUN_016d3fb4(local_3c);
  }
  return;
}

