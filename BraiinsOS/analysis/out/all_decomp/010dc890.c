// FUN_010dc890 @ 010dc890 size=368 calls_out=2 calls_in=2
// strings: 

void FUN_010dc890(uint *param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  puVar5 = *(uint **)(param_2 + 0x5c);
  iVar3 = *(int *)(param_2 + 0x88);
  uVar7 = *(uint *)(param_2 + 0x8c);
  uVar1 = *(undefined1 *)(param_2 + 0x90);
  cVar2 = *(char *)(param_2 + 0x91);
  puVar4 = *(uint **)(param_2 + 0x58);
  do {
    if (puVar4 == puVar5) {
      *param_1 = (uint)&DAT_00110000;
      return;
    }
    uVar6 = *puVar4;
    *(uint **)(param_2 + 0x58) = puVar4 + 1;
    if (uVar6 < uVar7) {
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = uVar6;
      param_1[1] = 0;
      return;
    }
    if ((iVar3 == 0) ||
       (FUN_010dcc04(param_1,uVar1,uVar6,iVar3), (undefined1 *)*param_1 == &DAT_00110000)) {
      puVar4 = *(uint **)(param_2 + 0x60);
      uVar7 = 0xffff;
      if ((char)puVar4[0xb] != '\0') {
        uVar7 = 0xfff;
      }
      if (uVar7 < uVar6) {
        if (uVar6 < puVar4[7]) {
          uVar7 = FUN_010dcf74(puVar4,uVar6);
        }
        else {
          uVar7 = puVar4[5] - 2;
        }
      }
      else if (uVar6 >> 6 < puVar4[2]) {
        uVar7 = (uVar6 & 0x3f) + (uint)*(ushort *)(puVar4[1] + (uVar6 >> 6) * 2);
      }
      else {
        uVar7 = puVar4[5] - 1;
      }
      if (uVar7 < puVar4[5]) {
        puVar4 = (uint *)(puVar4[4] + uVar7 * 4);
      }
      *(undefined1 *)(param_1 + 2) = 0;
      uVar7 = *puVar4;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      return;
    }
    if (param_1[1] != 0xffffffff) {
      return;
    }
    puVar4 = puVar4 + 1;
  } while (cVar2 == '\x01');
  if (cVar2 == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = uVar6;
  param_1[1] = 0xfffd;
  return;
}

