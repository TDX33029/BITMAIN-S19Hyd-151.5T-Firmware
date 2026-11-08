// FUN_019dfa94 @ 019dfa94 size=300 calls_out=7 calls_in=18
// strings: 

void FUN_019dfa94(uint *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint local_30;
  uint local_2c;
  
  do {
    FUN_019e7220(&local_40,param_2,param_4,1);
    if (local_40 == 2) {
      uVar2 = 5;
LAB_019dfb94:
      *(undefined1 *)param_1 = uVar2;
      return;
    }
    uVar3 = local_3c;
    if ((local_40 & 1) != 0) {
LAB_019dfba4:
      *param_1 = uVar3;
      param_1[1] = uStack_38;
      return;
    }
    local_30 = local_3c;
    local_2c = uStack_38;
    if (param_3 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28e94);
    }
    uVar3 = FUN_01be9b18(param_3,param_5,param_6,0x4000);
    if (uVar3 != 0xffffffff) {
      if ((uVar3 != 0) && (uVar3 < param_6)) {
        FUN_019e0788(param_2 + 0x20,&local_30);
      }
      uVar2 = 4;
      param_1[1] = uVar3;
      goto LAB_019dfb94;
    }
    puVar4 = (uint *)FUN_01be3244();
    uVar5 = *puVar4;
    local_40 = local_40 & 0xffffff00;
    local_3c = uVar5;
    cVar1 = FUN_005ef5e8(&local_40);
    uVar3 = local_40;
    if (cVar1 != '\r') {
      uStack_38 = local_3c;
      goto LAB_019dfba4;
    }
    FUN_019e0788(param_2 + 0x20,&local_30);
    FUN_0069263c(uVar3,uVar5);
  } while( true );
}

