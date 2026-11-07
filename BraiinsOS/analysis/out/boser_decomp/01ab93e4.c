// FUN_01ab93e4 @ 01ab93e4 size=476 calls_out=2 calls_in=1
// strings: 

void FUN_01ab93e4(int *param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int local_188;
  undefined1 auStack_178 [340];
  
  uVar1 = FUN_01ab2af4(param_2[4],param_2[5],param_2[6],param_2[7],param_3,param_4);
  uVar8 = uVar1 >> 0x19;
  iVar4 = *param_2;
  uVar5 = param_2[1];
  local_188 = 0;
  while( true ) {
    uVar1 = uVar5 & uVar1;
    uVar12 = *(uint *)(iVar4 + uVar1);
    uVar7 = uVar12 ^ uVar8 * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar11 = uVar1 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                      (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar5;
      piVar10 = (int *)(iVar4 + -0x160 + uVar11 * -0x160);
      uVar7 = uVar7 - 1 & uVar7;
      if (param_3 == *piVar10 && param_4 == piVar10[1]) {
        iVar2 = uVar11 * -0x160 + iVar4;
        iVar3 = ((int)(uVar11 * 0x160) >> 5) * -0x45d1745d;
        puVar6 = (uint *)(iVar4 + (iVar3 - 4U & uVar5));
        uVar1 = *puVar6;
        uVar8 = *(uint *)(iVar4 + iVar3) & 0x80808080 & *(uint *)(iVar4 + iVar3) << 1;
        uVar9 = 0x80;
        if (((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8
                           | uVar8 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar1 & 0x80808080 & uVar1 << 1) >> 3) < 4) {
          param_2[2] = param_2[2] + 1;
          uVar9 = 0xff;
        }
        *(undefined1 *)(iVar4 + iVar3) = uVar9;
        iVar4 = param_2[3];
        *(undefined1 *)(puVar6 + 1) = uVar9;
        param_2[3] = iVar4 + -1;
        iVar4 = *(int *)(iVar2 + -0x158);
        FUN_01bed4e2(auStack_178,iVar2 + -0x154,0x154);
        iVar2 = 2;
        if (iVar4 != 2) {
          FUN_01bed4e2(param_1 + 1,auStack_178,0x154);
          iVar2 = iVar4;
        }
        goto LAB_01ab95b4;
      }
    }
    iVar2 = 2;
    if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
    local_188 = local_188 + 4;
    uVar1 = uVar1 + local_188;
  }
LAB_01ab95b4:
  *param_1 = iVar2;
  return;
}

