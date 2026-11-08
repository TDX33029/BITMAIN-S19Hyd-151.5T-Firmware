// FUN_01b1cbf0 @ 01b1cbf0 size=132 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1cbf0(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = param_1;
  do {
    puVar2 = puVar1 + 5;
    *puVar1 = (char)*param_2;
    puVar1[1] = *(char *)(param_2 + 1) << 2 | (byte)((uint)*param_2 >> 8);
    puVar1[2] = *(char *)(param_2 + 2) << 4 | (byte)((int)param_2[1] >> 6);
    puVar1[3] = *(char *)(param_2 + 3) << 6 | (byte)((int)param_2[2] >> 4);
    puVar1[4] = (char)((int)param_2[3] >> 2);
    puVar1 = puVar2;
    param_2 = param_2 + 4;
  } while (puVar2 != param_1 + 0x140);
  return 0;
}

