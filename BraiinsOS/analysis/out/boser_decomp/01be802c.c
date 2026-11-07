// FUN_01be802c @ 01be802c size=394 calls_out=3 calls_in=1
// strings: 

int FUN_01be802c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5)

{
  byte *pbVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  char *local_2810;
  undefined1 *puStack_280c;
  undefined1 *local_2808;
  undefined1 *local_2804;
  int local_2800 [8];
  int local_27e0;
  int local_27dc;
  char local_27d8 [280];
  undefined1 auStack_26c0 [280];
  undefined1 auStack_25a8 [4800];
  undefined1 auStack_12e8 [4804];
  
  iVar8 = 0;
  piVar10 = (int *)&UNK_0056736c;
  iVar5 = 10;
  puStack_280c = auStack_26c0;
  local_2804 = auStack_12e8;
  local_27e0 = 0;
  local_27dc = 0;
  local_2810 = local_27d8;
  local_2808 = auStack_25a8;
  local_2800[6] = param_1;
  local_2800[7] = param_2;
  while( true ) {
    iVar11 = iVar8 * 0x118;
    if (param_4 != iVar5) {
      iVar7 = piVar10[1];
      iVar5 = FUN_01be8f00(0,param_3,1,iVar7,0,0,0,local_27d8 + iVar11,0x118);
      local_2800[iVar8] = iVar5;
      if (iVar5 == -1) {
        return 0;
      }
      local_2800[iVar8 + 4] = iVar7;
      local_27d8[iVar11 + 3] = '\0';
      if ((iVar8 != 0) && (local_27d8[0] == local_27d8[iVar11])) {
        local_27d8[iVar11] = local_27d8[0] + '\x01';
      }
      iVar8 = iVar8 + 1;
    }
    if (piVar10 == &DAT_00567374) break;
    piVar10 = piVar10 + 2;
    iVar5 = *piVar10;
  }
  piVar10 = local_2800 + 2;
  iVar5 = FUN_01be90b4(iVar8,&local_2810,local_2800,&local_2808,piVar10,0x12c0,param_5);
  if (iVar5 < 0) {
    iVar5 = -0xb;
  }
  else {
    iVar5 = 0;
    piVar2 = piVar10;
    puVar3 = auStack_25a8;
    do {
      if (iVar5 == iVar8) {
        piVar2 = local_2800 + iVar5 + 4;
        puVar3 = auStack_25a8 + (iVar5 + -1) * 0x12c0;
        for (piVar9 = piVar10 + iVar5; piVar9 != piVar10; piVar9 = piVar9 + -1) {
          uVar4 = piVar9[-1];
          piVar2 = piVar2 + -1;
          local_27dc = *piVar2;
          if (0x12c0 < uVar4) {
            piVar9[-1] = 0x12c0;
            uVar4 = 0x12c0;
          }
          FUN_01be728e(puVar3,uVar4,0x1be83e1,local_2800 + 6);
          puVar3 = puVar3 + -0x12c0;
        }
        if (local_27e0 == 0) {
          return -5;
        }
        return local_27e0;
      }
      iVar5 = iVar5 + 1;
      if (*piVar2 < 4) {
        return -3;
      }
      pbVar1 = puVar3 + 3;
      puVar3 = puVar3 + 0x12c0;
      bVar6 = *pbVar1 & 0xf;
      if (bVar6 == 2) {
        return -3;
      }
      if (bVar6 == 3) {
        return 0;
      }
      piVar2 = piVar2 + 1;
    } while ((*pbVar1 & 0xf) == 0);
    iVar5 = -4;
  }
  return iVar5;
}

