// FUN_016d8c2c @ 016d8c2c size=280 calls_out=4 calls_in=1
// strings: 

int FUN_016d8c2c(uint param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  undefined1 auStack_150 [8];
  uint local_148;
  char cStack_141;
  undefined2 local_140;
  char local_13e;
  undefined1 local_13d [10];
  undefined1 auStack_133 [271];
  
  uVar2 = FUN_016dd92c(param_2,0xff);
  uVar5 = uVar2;
  if (uVar2 != 0) {
    uVar4 = uVar2 - 1;
    if (*(char *)(param_2 + uVar4) != '.') {
      iVar6 = uVar2 + 0x12;
      uVar5 = (uint)(0xfd < uVar2);
      uVar4 = uVar2;
      goto LAB_016d8c6a;
    }
    if (uVar4 != 0) {
      if (*(char *)(param_2 + uVar2 + -2) == '.') {
        return -1;
      }
      iVar6 = uVar2 + 0x11;
      uVar5 = (uint)(0xfd < uVar4);
      goto LAB_016d8c6a;
    }
    uVar5 = uVar4;
  }
  iVar6 = 0x11;
  uVar4 = uVar5;
LAB_016d8c6a:
  if (in_stack_00000010 < iVar6) {
    uVar5 = uVar5 | 1;
  }
  if (uVar5 == 0) {
    bVar10 = 0xe < param_1;
    bVar9 = param_1 == 0xf;
    if (param_1 < 0x10) {
      bVar10 = 0xfe < (param_3 | param_4);
      bVar9 = (param_3 | param_4) == 0xff;
    }
    if (!bVar10 || bVar9) {
      FUN_016dd606(&local_140,0,iVar6);
      local_13e = (char)param_1 * '\b' + '\x01';
      local_13d[0] = 0x20;
      local_13d[2] = 1;
      FUN_016dd1aa(auStack_133,param_2,uVar4);
      iVar8 = 0xd;
      while( true ) {
        cVar1 = *(char *)((int)&local_140 + iVar8);
        if (cVar1 == '\0') {
          local_13d[iVar8] = (char)param_3;
          local_13d[iVar8 + -2] = (char)param_4;
          FUN_016dfe04(0,auStack_150);
          local_148 = local_148 + (local_148 >> 0x10);
          local_140 = (ushort)((local_148 & 0xff) << 8) | (ushort)(local_148 >> 8) & 0xff;
          FUN_016dd1aa(in_stack_0000000c,&local_140,iVar6);
          return iVar6;
        }
        pcVar7 = (char *)((int)&local_140 + iVar8);
        iVar3 = iVar8;
        while (cVar1 != '\0' && cVar1 != '.') {
          pcVar7 = pcVar7 + 1;
          iVar3 = iVar3 + 1;
          cVar1 = *pcVar7;
        }
        if (0x3e < (iVar3 - iVar8) - 1U) break;
        local_13d[iVar8 + -4] = (char)(iVar3 - iVar8);
        iVar8 = iVar3 + 1;
      }
    }
  }
  return -1;
}

