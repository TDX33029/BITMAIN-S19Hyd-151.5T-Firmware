// FUN_017033c0 @ 017033c0 size=216 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_017033c0(uint *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_2 + -4);
  do {
    puVar3 = puVar3 + 1;
    uVar2 = (*puVar3 >> 1 & 0x55555555) + (*puVar3 & 0x55555555);
    uVar1 = (ushort)(uVar2 >> 0x10);
    *param_1 = (uVar2 & 3) - ((uVar2 & 0xf) >> 2) & 0xffff |
               (((uVar2 & 0x3f) >> 4) - ((uVar2 & 0xff) >> 6)) * 0x10000;
    param_1[1] = ((uVar2 & 0x3ff) >> 8) - ((uVar2 & 0xfff) >> 10) & 0xffff |
                 (((uVar2 & 0x3fff) >> 0xc) - ((uVar2 & 0xffff) >> 0xe)) * 0x10000;
    *(ushort *)(param_1 + 2) = (uVar1 & 3) - ((uVar1 & 0xf) >> 2);
    *(ushort *)((int)param_1 + 10) = ((uVar1 & 0x3f) >> 4) - ((uVar1 & 0xff) >> 6);
    *(ushort *)(param_1 + 3) = (ushort)((byte)(uVar2 >> 0x18) & 3) - ((uVar1 & 0xfff) >> 10);
    *(ushort *)((int)param_1 + 0xe) = ((uVar1 & 0x3fff) >> 0xc) - (uVar1 >> 0xe);
    param_1 = param_1 + 4;
  } while (puVar3 != (uint *)(param_2 + 0x7c));
  return 0;
}

