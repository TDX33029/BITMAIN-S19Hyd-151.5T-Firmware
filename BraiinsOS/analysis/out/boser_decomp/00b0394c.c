// FUN_00b0394c @ 00b0394c size=428 calls_out=3 calls_in=2
// strings: Advertise over mDNS | When enabled; the miner advertises its web interface and API over mDNS/DNS-SD so it can be discovered on the local network without knowing its IP address. Large miners default to disabled because link-local multicast is flooded to every port on flat farm networks. Small miners default to enabled; a device's live schema reports the default for its platform.

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffb8 : 0x00b03a70 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b0394c(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar1 = thunk_FUN_01be5118(0x13);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x13);
  }
  FUN_01bed4e2(iVar1,"Advertise over mDNS",0x13);
  iVar2 = thunk_FUN_01be5118(0x166);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x166);
  }
  FUN_01bed4e2(iVar2,
               "When enabled, the miner advertises its web interface and API over mDNS/DNS-SD so it can be discovered on the local network without knowing its IP address. Large miners default to disabled because link-local multicast is flooded to every port on flat farm networks. Small miners default to enabled; a device\'s live schema reports the default for its platform."
               ,0x166);
  local_48 = CONCAT31(local_48._1_3_,1);
  puVar3 = (undefined4 *)thunk_FUN_01be5118(7);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,7);
  }
  *(undefined4 *)((int)puVar3 + 3) = 0x6b726f77;
  *puVar3 = 0x7774656e;
  puVar4 = (undefined4 *)thunk_FUN_01be5118(5);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,5);
  }
  *(undefined1 *)(puVar4 + 1) = 0x39;
  *puVar4 = 0x302e3632;
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x166;
  *(undefined4 *)(param_1 + 0xa8) = 0x13;
  *(undefined4 *)(param_1 + 0xac) = 0x166;
  *(int *)(param_1 + 0xb0) = iVar2;
  *(int *)(param_1 + 0xa4) = iVar1;
  *(undefined4 *)(param_1 + 0xa0) = 0x13;
  *(undefined4 *)(param_1 + 0x30) = local_48;
  *(undefined4 *)(param_1 + 0x34) = uStack_44;
  *(undefined4 *)(param_1 + 0x38) = uStack_40;
  *(undefined4 *)(param_1 + 0x3c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x40) = uStack_38;
  *(undefined4 *)(param_1 + 0x44) = uStack_34;
  param_1[0x18] = 6;
  *param_1 = 6;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 4;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x94) = 5;
  *(undefined4 **)(param_1 + 0x98) = puVar4;
  *(undefined4 *)(param_1 + 0x9c) = 5;
  *(undefined4 *)(param_1 + 0x90) = 7;
  *(undefined4 **)(param_1 + 0x8c) = puVar3;
  *(undefined4 *)(param_1 + 0x88) = 7;
  *(undefined4 *)(param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x70) = 0x80000000;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x80000000;
  return;
}

