// FUN_015f5cbc @ 015f5cbc size=224 calls_out=2 calls_in=1
// strings: 

void FUN_015f5cbc(undefined1 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  
  do {
    do {
      pcVar5 = (char *)FUN_015da8cc(param_2);
      if (pcVar5 == (char *)0x0) {
        *param_1 = 2;
        return;
      }
    } while (*pcVar5 != '\x01');
    puVar10 = *(uint **)**(int **)(param_2 + 0x14);
    iVar9 = ((undefined4 *)**(int **)(param_2 + 0x14))[3];
    puVar8 = puVar10 + 1;
    uVar11 = ~*puVar10 & 0x80808080;
    while (iVar9 != 0) {
      puVar7 = puVar8;
      if (uVar11 == 0) {
        do {
          puVar8 = puVar7 + 1;
          uVar11 = *puVar7;
          puVar10 = puVar10 + -0x32;
          puVar7 = puVar8;
        } while ((uVar11 & 0x80808080) == 0x80808080);
        uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
      }
      uVar1 = uVar11 >> 8;
      uVar2 = uVar11 >> 0x10;
      uVar3 = uVar11 >> 0x18;
      uVar4 = uVar11 << 0x18;
      uVar11 = uVar11 - 1 & uVar11;
      iVar6 = FUN_015f0af0(pcVar5,(int)puVar10 +
                                  (short)-(short)((uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 |
                                                                (uVar2 & 0xff) << 8 | uVar3) >> 3) *
                                  0x32 + -0x32);
      iVar9 = iVar9 + -1;
      if (iVar6 != 0) {
        FUN_01bed4e2(param_1,pcVar5,0x11);
        return;
      }
    }
  } while( true );
}

