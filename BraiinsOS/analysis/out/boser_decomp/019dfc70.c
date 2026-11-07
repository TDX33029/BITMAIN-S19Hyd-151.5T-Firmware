// FUN_019dfc70 @ 019dfc70 size=272 calls_out=7 calls_in=16
// strings: 

void FUN_019dfc70(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint local_30;
  uint local_2c;
  
  iVar5 = *(int *)(param_2 + 8);
  iVar6 = *(int *)(param_2 + 0xc);
  if (0x3ff < param_5) {
    param_5 = 0x400;
  }
  do {
    FUN_019e7220(&local_40,iVar5,param_3,1);
    if (local_40 == 2) {
      uVar2 = 5;
LAB_019dfd54:
      *(undefined1 *)param_1 = uVar2;
      return;
    }
    uVar3 = local_3c;
    if ((local_40 & 1) != 0) {
LAB_019dfd64:
      *param_1 = uVar3;
      param_1[1] = uStack_38;
      return;
    }
    local_30 = local_3c;
    local_2c = uStack_38;
    if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d29244);
    }
    uVar3 = FUN_01bf0560(iVar6,param_4,param_5);
    if (uVar3 != 0xffffffff) {
      param_1[1] = uVar3;
      uVar2 = 4;
      goto LAB_019dfd54;
    }
    puVar4 = (uint *)FUN_01be3244();
    uVar3 = *puVar4;
    local_40 = local_40 & 0xffffff00;
    local_3c = uVar3;
    cVar1 = FUN_005ef5e8(&local_40);
    if (cVar1 != '\r') {
      uVar3 = local_40;
      uStack_38 = local_3c;
      goto LAB_019dfd64;
    }
    FUN_019e0788(iVar5 + 0x20,&local_30);
    FUN_0069263c(0,uVar3);
  } while( true );
}

