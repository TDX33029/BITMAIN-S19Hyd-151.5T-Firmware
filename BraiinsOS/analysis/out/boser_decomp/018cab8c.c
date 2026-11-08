// FUN_018cab8c @ 018cab8c size=504 calls_out=4 calls_in=3
// strings: 

void FUN_018cab8c(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int local_ac;
  undefined1 auStack_98 [116];
  
  uVar2 = FUN_018bef28(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar7 = uVar2 >> 0x19;
  iVar14 = *param_2;
  uVar10 = param_2[1];
  local_ac = 0;
  while( true ) {
    uVar2 = uVar10 & uVar2;
    uVar3 = *(uint *)(iVar14 + uVar2);
    uVar4 = uVar3 ^ uVar7 * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar4 != 0) {
      uVar11 = uVar2 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar10;
      iVar5 = FUN_018cd540(param_3,iVar14 + -0x90 + uVar11 * -0x90);
      uVar4 = uVar4 - 1 & uVar4;
      if (iVar5 != 0) {
        iVar5 = ((int)(uVar11 * 0x90) >> 4) * 0x38e38e39;
        puVar6 = (uint *)(iVar14 + (iVar5 - 4U & uVar10));
        uVar2 = *puVar6;
        uVar7 = *(uint *)(iVar14 + iVar5) & 0x80808080 & *(uint *)(iVar14 + iVar5) << 1;
        uVar9 = 0x80;
        if (((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                           | uVar7 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar2 & 0x80808080 & uVar2 << 1) >> 3) < 4) {
          param_2[2] = param_2[2] + 1;
          uVar9 = 0xff;
        }
        iVar8 = iVar14 + uVar11 * -0x90;
        *(undefined1 *)(iVar14 + iVar5) = uVar9;
        iVar14 = param_2[3];
        *(undefined1 *)(puVar6 + 1) = uVar9;
        param_2[3] = iVar14 + -1;
        cVar1 = *(char *)(iVar8 + -0x90);
        uVar12 = *(undefined4 *)(iVar8 + -0x8c);
        uVar13 = *(undefined4 *)(iVar8 + -0x88);
        iVar14 = *(int *)(iVar8 + -0x78);
        FUN_01bed4e2(auStack_98,iVar8 + -0x74,0x74);
        if (iVar14 != -0x80000000) {
          *param_1 = iVar14;
          FUN_01bed4e2(param_1 + 1,auStack_98,0x74);
          if (cVar1 == '\0') {
            FUN_0134bd64(uVar12,uVar13);
            return;
          }
          return;
        }
        goto LAB_018cad3c;
      }
    }
    if ((uVar3 & 0x80808080 & uVar3 << 1) != 0) break;
    local_ac = local_ac + 4;
    uVar2 = uVar2 + local_ac;
  }
LAB_018cad3c:
  *param_1 = -0x80000000;
  return;
}

