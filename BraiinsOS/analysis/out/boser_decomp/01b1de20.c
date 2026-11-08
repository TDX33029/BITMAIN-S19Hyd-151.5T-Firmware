// FUN_01b1de20 @ 01b1de20 size=264 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b1de20(undefined2 *param_1,ushort *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  int iVar5;
  ushort local_1c [4];
  int local_14;
  
  iVar1 = DAT_01d53560;
  iVar5 = 0;
  local_14 = DAT_01d53560;
  while( true ) {
    local_1c[0] = *param_2 & 0x3ff;
    local_1c[1] = ((byte)param_2[1] & 0xf) << 6 | (ushort)(*(byte *)((int)param_2 + 1) >> 2);
    local_1c[2] = (*(byte *)((int)param_2 + 3) & 0x3f) << 4 | (ushort)(byte)((byte)param_2[1] >> 4);
    local_1c[3] = (ushort)(*(byte *)((int)param_2 + 3) >> 6) | (ushort)(byte)param_2[2] << 2;
    puVar2 = param_1;
    puVar4 = local_1c;
    do {
      puVar3 = puVar2 + 1;
      *puVar2 = (short)((uint)*puVar4 * 0xd01 + 0x200 >> 10);
      puVar2 = puVar3;
      puVar4 = puVar4 + 1;
    } while (param_1 + 4 != puVar3);
    iVar5 = iVar5 + 4;
    param_2 = (ushort *)((int)param_2 + 5);
    if (iVar5 == 0x100) break;
    param_1 = param_1 + 4;
  }
  if (iVar1 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

