// FUN_01898790 @ 01898790 size=168 calls_out=2 calls_in=0
// strings: 

void FUN_01898790(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *unaff_r5;
  undefined8 uVar4;
  undefined8 uStack_24;
  int local_1c;
  
  uStack_24 = FUN_01898838(param_3,0x30);
  if ((int)uStack_24 == 0) {
LAB_01898828:
    *param_1 = 0;
  }
  else {
    local_1c = 0;
    uVar4 = FUN_01899080(&uStack_24);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    pbVar1 = (byte *)uVar4;
    if (pbVar1 != (byte *)0x0) {
      pbVar2 = pbVar1;
      if (iVar3 != 0) {
        pbVar2 = (byte *)(uint)*pbVar1;
        unaff_r5 = pbVar1;
      }
      if (iVar3 != 0 && pbVar2 != (byte *)0x0) {
        uVar4 = FUN_01899080(&uStack_24);
        if (((char *)uVar4 != (char *)0x0 && (int)((ulonglong)uVar4 >> 0x20) != 0) &&
           (*(char *)uVar4 != '\0')) {
          if (local_1c == uStack_24._4_4_) {
            *param_1 = unaff_r5;
            param_1[1] = iVar3;
            *(undefined8 *)(param_1 + 2) = uVar4;
            return;
          }
          goto LAB_01898828;
        }
      }
    }
    *param_1 = 0;
  }
  return;
}

