// FUN_0131a830 @ 0131a830 size=96 calls_out=2 calls_in=1
// strings: 

void FUN_0131a830(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_c;
  
  uVar2 = *param_1;
  while( true ) {
    puVar1 = (uint *)(uVar2 & 0xfffffffc);
    if (puVar1 == (uint *)0x0) {
      return;
    }
    uVar2 = *puVar1;
    local_c = uVar2 & 3;
    if (local_c != 1) break;
    FUN_01319dbc(puVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01304210(0,&local_c,&DAT_0056ed00,0);
}

