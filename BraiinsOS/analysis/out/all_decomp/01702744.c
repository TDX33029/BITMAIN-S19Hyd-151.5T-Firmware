// FUN_01702744 @ 01702744 size=140 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01702744(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 *puVar2;
  undefined1 *puVar1;
  
  puVar2 = param_1;
  do {
    puVar1 = puVar2 + 5;
    *puVar2 = (char)*param_2;
    puVar2[1] = (byte)(param_2[1] << 2) | (byte)((uint)*param_2 >> 8);
    puVar2[2] = (byte)(param_2[2] << 4) | (byte)((int)param_2[1] >> 6);
    puVar2[3] = (byte)(param_2[3] << 6) | (byte)((int)param_2[2] >> 4);
    puVar2[4] = (char)((int)param_2[3] >> 2);
    puVar2 = puVar1;
    param_2 = param_2 + 4;
  } while (puVar1 != param_1 + 0x140);
  return 0;
}

