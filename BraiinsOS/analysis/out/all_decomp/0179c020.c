// FUN_0179c020 @ 0179c020 size=340 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_0179c020(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  char cVar12;
  undefined4 *puVar13;
  char *local_2c;
  
  puVar13 = (undefined4 *)*param_1;
  iVar5 = param_1[4];
  iVar9 = param_1[5];
  if ((undefined4 *)param_1[1] == puVar13) {
    uVar10 = 0;
  }
  else {
    iVar2 = (int)param_1[1] - (int)puVar13;
    pcVar11 = (char *)(iVar5 + -1);
    iVar1 = iVar9 + -1;
    local_2c = (char *)(param_1[6] + -1);
    uVar10 = 0;
    pcVar3 = "";
    while( true ) {
      uVar4 = (uint)*(ushort *)(puVar13 + 1);
      uVar7 = (uint)*(ushort *)((int)puVar13 + 6);
      cVar12 = '2' - (char)LZCOUNT(uVar4);
      uVar6 = *puVar13;
      if (uVar4 < 0x40) {
        pcVar3 = "";
      }
      uVar8 = LZCOUNT(uVar6) - 7;
      if (uVar4 < 0x40) {
        cVar12 = pcVar3[uVar4];
      }
      pcVar11 = pcVar11 + 1;
      *pcVar11 = cVar12;
      pcVar3 = (char *)((iVar1 + 2) - iVar9);
      local_2c = local_2c + 1;
      *local_2c = '\x1f' - (char)LZCOUNT(uVar6);
      if (uVar7 < 0x80) {
        if (0x18 < uVar8) {
          uVar10 = 1;
        }
        *(undefined *)(iVar1 + 1) = (&DAT_00450504)[uVar7];
      }
      else {
        if (0x18 < uVar8) {
          uVar10 = 1;
        }
        *(char *)(iVar1 + 1) = 'C' - (char)LZCOUNT(uVar7);
      }
      if ((char *)(iVar2 >> 3) <= pcVar3) break;
      puVar13 = puVar13 + 2;
      iVar1 = iVar1 + 1;
    }
  }
  iVar1 = param_1[9];
  if (iVar1 == 1) {
    *(undefined1 *)(iVar5 + param_1[10]) = 0x23;
    iVar1 = param_1[9];
  }
  if (iVar1 == 2) {
    *(undefined1 *)(iVar9 + param_1[10]) = 0x34;
  }
  return uVar10;
}

