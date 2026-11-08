// FUN_01b1df34 @ 01b1df34 size=84 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1df34(undefined1 *param_1,undefined2 *param_2)

{
  short sVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = param_1;
  do {
    sVar1 = param_2[1];
    puVar4 = puVar3 + 3;
    uVar2 = *param_2;
    param_2 = param_2 + 2;
    *puVar3 = (char)uVar2;
    puVar3[2] = (char)((uint)(int)sVar1 >> 4);
    puVar3[1] = (byte)((int)sVar1 << 4) | (byte)((ushort)uVar2 >> 8);
    puVar3 = puVar4;
  } while (param_1 + 0x180 != puVar4);
  return 0;
}

