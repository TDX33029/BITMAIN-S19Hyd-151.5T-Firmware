// FUN_019dcedc @ 019dcedc size=288 calls_out=6 calls_in=4
// strings: 

void FUN_019dcedc(uint *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint local_30;
  uint local_2c;
  
  do {
    FUN_019e7220(&local_40,param_2,param_4,1);
    if (local_40 == 2) {
      uVar3 = 5;
LAB_019dcfd0:
      *(undefined1 *)param_1 = uVar3;
      return;
    }
    uVar4 = local_3c;
    if ((local_40 & 1) != 0) {
LAB_019dcfe0:
      *param_1 = uVar4;
      param_1[1] = uStack_38;
      return;
    }
    local_30 = local_3c;
    local_2c = uStack_38;
    if (param_3 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28e94);
    }
    FUN_01609c08(&local_40,param_3,param_5,param_6);
    if ((char)local_40 == '\x04') {
      if ((local_3c != 0) && (local_3c < param_6)) {
        FUN_019e0788(param_2 + 0x20,&local_30);
      }
      uVar3 = 4;
      param_1[1] = local_3c;
      goto LAB_019dcfd0;
    }
    cVar2 = FUN_005ef5e8(&local_40);
    uVar1 = local_3c;
    uVar4 = local_40;
    if (cVar2 != '\r') {
      uStack_38 = local_3c;
      goto LAB_019dcfe0;
    }
    FUN_019e0788(param_2 + 0x20,&local_30);
    FUN_0069263c(uVar4,uVar1);
  } while( true );
}

