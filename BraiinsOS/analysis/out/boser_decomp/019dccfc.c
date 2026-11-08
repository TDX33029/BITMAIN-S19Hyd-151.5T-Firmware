// FUN_019dccfc @ 019dccfc size=456 calls_out=9 calls_in=3
// strings: filled overflow | filled must not become larger than initialized

void FUN_019dccfc(uint *param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint local_30;
  uint local_2c;
  
  iVar3 = *param_5;
  uVar6 = param_5[1];
  uVar5 = param_5[2];
  do {
    FUN_019e7220(&local_40,param_2,param_4,0);
    if (local_40 == 2) {
      *(undefined1 *)param_1 = 5;
      return;
    }
    uVar4 = local_3c;
    if ((local_40 & 1) != 0) {
LAB_019dce60:
      *param_1 = uVar4;
      param_1[1] = uStack_38;
      return;
    }
    local_30 = local_3c;
    local_2c = uStack_38;
    if (uVar6 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar5,uVar6,uVar6,&DAT_01d292c4);
    }
    if (param_3 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28ed4);
    }
    FUN_019bb3cc(&local_40,param_3,iVar3 + uVar5,uVar6 - uVar5);
    if ((char)local_40 == '\x04') {
      if ((local_3c != 0) && (local_3c < uVar6 - uVar5)) {
        FUN_019e0788(param_2 + 0x20,&local_30);
      }
      local_3c = local_3c + uVar5;
      uVar6 = param_5[3];
      if ((uint)param_5[3] < local_3c) {
        param_5[3] = local_3c;
        uVar6 = local_3c;
      }
      if (local_3c < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("filled overflow",0xf,&DAT_01d28ee4);
      }
      if (uVar6 < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("filled must not become larger than initialized",0x5d,&DAT_01d28ee4);
      }
      param_5[2] = local_3c;
      *(undefined1 *)param_1 = 4;
      return;
    }
    cVar2 = FUN_005ef5e8(&local_40);
    uVar1 = local_3c;
    uVar4 = local_40;
    if (cVar2 != '\r') {
      uStack_38 = local_3c;
      goto LAB_019dce60;
    }
    FUN_019e0788(param_2 + 0x20,&local_30);
    FUN_0069263c(uVar4,uVar1);
  } while( true );
}

