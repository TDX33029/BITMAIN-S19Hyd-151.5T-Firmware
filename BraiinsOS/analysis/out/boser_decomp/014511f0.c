// FUN_014511f0 @ 014511f0 size=360 calls_out=2 calls_in=2
// strings: 

void FUN_014511f0(uint *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  puVar7 = *(uint **)(param_2 + 0x5c);
  iVar5 = *(int *)(param_2 + 0x88);
  uVar9 = *(uint *)(param_2 + 0x8c);
  uVar1 = *(undefined1 *)(param_2 + 0x90);
  cVar2 = *(char *)(param_2 + 0x91);
  puVar6 = *(uint **)(param_2 + 0x58);
  do {
    if (puVar6 == puVar7) {
      *param_1 = (uint)&DAT_00110000;
      return;
    }
    uVar8 = *puVar6;
    *(uint **)(param_2 + 0x58) = puVar6 + 1;
    if (uVar8 < uVar9) {
      uVar9 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      goto LAB_014512dc;
    }
    if ((iVar5 == 0) ||
       (FUN_01451358(param_1,uVar1,uVar8,iVar5), param_3 = extraout_r2,
       (undefined1 *)*param_1 == &DAT_00110000)) {
      puVar6 = *(uint **)(param_2 + 0x60);
      uVar9 = 0xffff;
      if ((char)puVar6[0xb] != '\0') {
        uVar9 = 0xfff;
      }
      if (uVar9 < uVar8) {
        if (uVar8 < puVar6[7]) {
          uVar9 = FUN_01449040(puVar6,uVar8);
          param_3 = extraout_r2_00;
        }
        else {
          uVar9 = puVar6[5] - 2;
        }
      }
      else if (uVar8 >> 6 < puVar6[2]) {
        uVar9 = (uVar8 & 0x3f) + (uint)*(ushort *)(puVar6[1] + (uVar8 >> 6) * 2);
      }
      else {
        uVar9 = puVar6[5] - 1;
      }
      uVar3 = puVar6[5];
      *(undefined1 *)(param_1 + 2) = 0;
      uVar4 = *puVar6;
      if (uVar9 < uVar3) {
        param_3 = puVar6[4];
      }
      *param_1 = uVar8;
      if (uVar9 < uVar3) {
        uVar4 = *(uint *)(param_3 + uVar9 * 4);
      }
      param_1[1] = uVar4;
      return;
    }
    if (param_1[1] != 0xffffffff) {
      return;
    }
    puVar6 = puVar6 + 1;
  } while (cVar2 == '\x01');
  if (cVar2 != '\0') {
    uVar9 = 0xfffd;
    *(undefined1 *)(param_1 + 2) = 0;
LAB_014512dc:
    *param_1 = uVar8;
    param_1[1] = uVar9;
  }
  return;
}

