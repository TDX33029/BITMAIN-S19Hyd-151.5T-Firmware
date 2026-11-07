// FUN_015a7138 @ 015a7138 size=124 calls_out=1 calls_in=0
// strings: MaxPacketSizeEnableInterfaceMulticastLoopV4MulticastLoopV6AcceptUnsolicitedIncludeAppleP2P

void FUN_015a7138(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x015a7160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_015a7164 + *(int *)(&DAT_015a7164 + iVar1 * 4)))();
  return;
}

