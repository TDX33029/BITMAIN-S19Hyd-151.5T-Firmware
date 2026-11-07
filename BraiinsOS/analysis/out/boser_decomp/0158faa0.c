// FUN_0158faa0 @ 0158faa0 size=168 calls_out=1 calls_in=1
// strings: 

undefined * FUN_0158faa0(undefined1 param_1)

{
  undefined *puVar1;
  undefined *local_10;
  undefined **local_c;
  
  switch(param_1) {
  case 0:
    puVar1 = (undefined *)0x1d4ed38;
    break;
  case 1:
    puVar1 = (undefined *)0x1d4ed54;
    break;
  case 2:
    puVar1 = (undefined *)0x1d4ed70;
    break;
  case 3:
    puVar1 = &DAT_01d4ed8c;
    break;
  default:
    puVar1 = (undefined *)0x1d4eda8;
  }
  DataMemoryBarrier(0xb);
  if (*(int *)(puVar1 + 0x18) != 0) {
    local_c = &local_10;
    local_10 = puVar1;
    FUN_019a768c(puVar1 + 0x18,1,&local_c,&DAT_01cfc1fc,&DAT_01d293e0);
  }
  return puVar1;
}

