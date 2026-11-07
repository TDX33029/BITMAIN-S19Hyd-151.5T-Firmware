// FUN_0071452c @ 0071452c size=164 calls_out=1 calls_in=0
// strings: 

void FUN_0071452c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  puVar1[3] = 0;
  puVar1[4] = 0x1e;
  puVar1[2] = 0x1e;
  puVar1[0x10] = 0x3c;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0x40468000;
  puVar1[5] = 0;
  puVar1[6] = 300;
  puVar1[7] = 0;
  puVar1[8] = 10;
  puVar1[9] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x11] = 0;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = 0;
  puVar1[0x12] = 0x14;
  puVar1[0x13] = 3;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)((int)puVar1 + 0x5b) = 0;
  *(undefined8 *)(puVar1 + 10) = 0x4008000000000000;
  return;
}

