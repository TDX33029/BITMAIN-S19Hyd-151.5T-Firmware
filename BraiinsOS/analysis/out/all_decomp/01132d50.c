// FUN_01132d50 @ 01132d50 size=172 calls_out=3 calls_in=1
// strings: Insanely large extranonce2_sizeevent open/protocols/stratum-proxy/src/translation.rs:709handle_extranonce_subscribe_resultevent open/protocols/stratum-proxy/src/translation.rs:693event open/protocols/stratum-proxy/src/translation.rs:696 | Extranonce sizes bigger than 32 cannot be translated

void FUN_01132d50(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_3 >> 0x10 == 0) {
    if (param_3 < 0x21) {
      *(short *)(param_2 + 0x200) = (short)param_3;
      *param_1 = 0x11;
      return;
    }
    uVar4 = 0x34;
    iVar1 = thunk_FUN_016d4a50(0x34);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x34);
    }
    uVar3 = 0x34;
    pcVar2 = "Extranonce sizes bigger than 32 cannot be translated";
  }
  else {
    uVar4 = 0x1f;
    iVar1 = thunk_FUN_016d4a50(0x1f);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x1f);
    }
    uVar3 = 0x1f;
    pcVar2 = 
    "Insanely large extranonce2_sizeevent open/protocols/stratum-proxy/src/translation.rs:709handle_extranonce_subscribe_resultevent open/protocols/stratum-proxy/src/translation.rs:693event open/protocols/stratum-proxy/src/translation.rs:696"
    ;
  }
  FUN_016dd1aa(iVar1,pcVar2,uVar3);
  param_1[1] = uVar4;
  param_1[2] = iVar1;
  param_1[3] = uVar4;
  *param_1 = 1;
  return;
}

