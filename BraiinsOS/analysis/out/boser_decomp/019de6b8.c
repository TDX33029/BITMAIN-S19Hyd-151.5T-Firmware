// FUN_019de6b8 @ 019de6b8 size=476 calls_out=10 calls_in=4
// strings: filled overflow | filled must not become larger than initialized

void FUN_019de6b8(uint *param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint local_30;
  uint local_2c;
  
  iVar2 = *param_5;
  uVar7 = param_5[1];
  uVar5 = param_5[2];
  do {
    FUN_019e7220(&local_40,param_2,param_4,0);
    if (local_40 == 2) {
      *(undefined1 *)param_1 = 5;
      return;
    }
    uVar3 = local_3c;
    if ((local_40 & 1) != 0) {
LAB_019de830:
      *param_1 = uVar3;
      param_1[1] = uStack_38;
      return;
    }
    local_30 = local_3c;
    local_2c = uStack_38;
    if (uVar7 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar5,uVar7,uVar7,&DAT_01d292c4);
    }
    if (param_3 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28ed4);
    }
    uVar3 = FUN_01bf0424(param_3,iVar2 + uVar5,uVar7 - uVar5);
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
    puVar4 = (uint *)FUN_01be3244();
    uVar6 = *puVar4;
    local_40 = local_40 & 0xffffff00;
    local_3c = uVar6;
    cVar1 = FUN_005ef5e8(&local_40);
    uVar3 = local_40;
    if (cVar1 != '\r') {
      uStack_38 = local_3c;
      goto LAB_019de830;
    }
    FUN_019e0788(param_2 + 0x20,&local_30);
    FUN_0069263c(uVar3,uVar6);
  } while( true );
}

