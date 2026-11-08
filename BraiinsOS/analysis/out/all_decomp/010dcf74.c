// FUN_010dcf74 @ 010dcf74 size=272 calls_out=1 calls_in=5
// strings: 

int FUN_010dcf74(int param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    iVar2 = 0x3fc;
  }
  else {
    iVar2 = 0x40;
    if (*(uint *)(param_1 + 0x1c) <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00387c40,0x5d,&DAT_01885838);
    }
  }
  uVar3 = *(uint *)(param_1 + 8);
  uVar4 = (param_2 >> 0xe) + iVar2;
  if (uVar4 < uVar3) {
    iVar2 = *(int *)(param_1 + 4);
    uVar4 = ((param_2 & 0x3fff) >> 9) + (uint)*(ushort *)(iVar2 + uVar4 * 2);
    if (uVar4 < uVar3) {
      uVar1 = *(ushort *)(iVar2 + uVar4 * 2);
      if ((short)uVar1 < 0) {
        uVar4 = (param_2 >> 4 & 0x18 | (param_2 & 0x1ff) >> 7) + (uVar1 & 0x7fff);
        if (uVar4 < uVar3) {
          uVar5 = param_2 >> 4 & 7;
          uVar6 = uVar5 + uVar4 + 1;
          if (uVar6 < uVar3) {
            return ((uint)*(ushort *)(iVar2 + uVar4 * 2) << uVar5 * 2 + 2 & 0x30000 |
                   (uint)*(ushort *)(iVar2 + uVar6 * 2)) + (param_2 & 0xf);
          }
        }
      }
      else {
        uVar4 = ((param_2 & 0x1ff) >> 4) + (uint)uVar1;
        if (uVar4 < uVar3) {
          return (uint)*(ushort *)(iVar2 + uVar4 * 2) + (param_2 & 0xf);
        }
      }
    }
  }
  return *(int *)(param_1 + 0x14) + -1;
}

