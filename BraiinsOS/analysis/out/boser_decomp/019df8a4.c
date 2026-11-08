// FUN_019df8a4 @ 019df8a4 size=472 calls_out=10 calls_in=10
// strings: filled overflow | filled must not become larger than initialized

void FUN_019df8a4(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar2 = *param_5;
  uVar7 = param_5[1];
  uVar5 = param_5[2];
  while( true ) {
    FUN_019e7220(&local_40,param_2,param_4,0);
    if (local_40 == 2) {
      *(undefined1 *)param_1 = 5;
      return;
    }
    if ((local_40 & 1) != 0) {
      *param_1 = local_3c;
      param_1[1] = uStack_38;
      return;
    }
    local_30 = local_3c;
    local_2c = uStack_38;
    if (uVar7 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar5,uVar7,uVar7,&DAT_01d292c4);
    }
    if (param_3 == -1) break;
    uVar3 = FUN_01be8da0(param_3,iVar2 + uVar5,uVar7 - uVar5,0);
    if (uVar3 != 0xffffffff) {
      if ((uVar3 != 0) && (uVar3 < uVar7 - uVar5)) {
        FUN_019e0788(param_2 + 0x20,&local_30);
      }
      uVar3 = uVar3 + uVar5;
      uVar7 = param_5[3];
      if ((uint)param_5[3] < uVar3) {
        param_5[3] = uVar3;
        uVar7 = uVar3;
      }
      if (uVar3 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("filled overflow",0xf,&DAT_01d28ee4);
      }
      if (uVar7 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("filled must not become larger than initialized",0x5d,&DAT_01d28ee4);
      }
      param_5[2] = uVar3;
      *(undefined1 *)param_1 = 4;
      return;
    }
    puVar4 = (undefined4 *)FUN_01be3244();
    uVar6 = *puVar4;
    local_40 = 0;
    local_3c = uVar6;
    cVar1 = FUN_005ef5e8(&local_40);
    if (cVar1 != '\r') {
      *param_1 = 0;
      param_1[1] = uVar6;
      return;
    }
    FUN_019e0788(param_2 + 0x20,&local_30);
    FUN_0069263c(0,uVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01d28ed4);
}

