// FUN_01702f8c @ 01702f8c size=200 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01702f8c(uint *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  
  puVar9 = param_2 + 0x100;
  do {
    puVar1 = param_2 + 1;
    uVar4 = *param_2;
    puVar2 = param_2 + 2;
    puVar3 = param_2 + 3;
    param_2 = param_2 + 4;
    uVar5 = (uint)((ulonglong)*puVar1 * 0x9d7dbc00 + 0x100000000 >> 0x20) & 0x7ff;
    uVar6 = (uint)((ulonglong)uVar4 * 0x9d7dbc00 + 0x100000000 >> 0x20) & 0x7ff;
    uVar7 = (uint)((ulonglong)*puVar2 * 0x9d7dbc00 + 0x100000000 >> 0x20) & 0x7ff;
    uVar8 = (uint)((ulonglong)*puVar3 * 0x9d7dbc00 + 0x100000000 >> 0x20) & 0x7ff;
    *(char *)(param_1 + 1) = (char)(uVar8 >> 3);
    *param_1 = uVar6 >> 1 & 0xff | ((uVar5 >> 1 & 0x3f) << 2 | uVar6 >> 9) << 8 |
               ((uVar7 >> 1 & 0xf) << 4 | uVar5 >> 7) << 0x10 |
               ((uVar8 >> 1) << 6 | uVar7 >> 5) << 0x18;
    param_1 = (uint *)((int)param_1 + 5);
  } while (puVar9 != param_2);
  return 0;
}

