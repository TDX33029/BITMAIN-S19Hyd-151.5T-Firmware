// FUN_0079c2f0 @ 0079c2f0 size=388 calls_out=5 calls_in=4
// strings: assertion failed: connection_details.protocol.is_v2()event open/bosminer/bosminer/src/client/stratum_v2.rs:1273stratum-v2

void FUN_0079c2f0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 auStack_f0 [204];
  
  if (*param_2 != -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: connection_details.protocol.is_v2()event open/bosminer/bosminer/src/client/stratum_v2.rs:1273stratum-v2"
                 ,0x35,&DAT_0185ceec);
  }
  if ((char)param_2[4] == '\0') {
    puVar1 = &DAT_00000001;
    puVar4 = &UNK_0185b4b8;
  }
  else {
    if ((char)param_2[4] == '\x01') {
      FUN_016dd1aa((uint)auStack_f0 | 7,param_2 + 6,0xc0);
      puVar1 = (undefined1 *)thunk_FUN_016d4a50(200);
      if (puVar1 == (undefined1 *)0x0) {
LAB_0079c46c:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,200);
      }
      *puVar1 = 1;
      puVar2 = auStack_f0;
      uVar3 = 199;
    }
    else {
      puVar1 = (undefined1 *)thunk_FUN_016d4a50(200);
      if (puVar1 == (undefined1 *)0x0) goto LAB_0079c46c;
      *puVar1 = 0;
      puVar2 = (undefined1 *)((int)param_2 + 0x11);
      uVar3 = 0x20;
    }
    FUN_016dd1aa(puVar1 + 1,puVar2,uVar3);
    puVar4 = &DAT_0185e0f0;
  }
  local_fc = param_4[1];
  local_f8 = param_4[2];
  local_100 = *param_4;
  FUN_0079c500(param_1,param_2,puVar1,puVar4,param_3,&local_100,param_5,param_6,param_7,param_8,
               param_9,param_10,param_11,param_12,param_13);
  return;
}

