// FUN_016c386c @ 016c386c size=384 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_016c386c(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  int local_24;
  int *local_20;
  undefined1 *local_1c;
  
  pcVar6 = (char *)(param_1 + 0x14);
  piVar4 = (int *)(param_1 + 8);
  do {
    do {
      local_24 = *piVar4;
      DataMemoryBarrier(0xb);
      switch(local_24) {
      case 0:
      case 2:
        DataMemoryBarrier(0xb);
        break;
      case 1:
        return 0;
      case 3:
        return 1;
      default:
        local_20 = &local_24;
        local_1c = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00570d95,&local_20,&DAT_018af288);
      }
      do {
        cVar1 = *pcVar6;
        bVar2 = (bool)hasExclusiveAccess(pcVar6);
      } while (!bVar2);
      *pcVar6 = '\x01';
      DataMemoryBarrier(0xb);
    } while (cVar1 != '\0');
    if (*piVar4 == local_24) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar4);
        if (bVar2) {
          *piVar4 = 2;
          DataMemoryBarrier(0xb);
          if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)*param_2;
            iVar3 = param_2[1];
          }
          else {
            puVar5 = (undefined4 *)*param_2;
            iVar3 = param_2[1];
            if (*(int *)(param_1 + 0x10) == iVar3 && *(undefined4 **)(param_1 + 0xc) == puVar5) {
              DataMemoryBarrier(0xb);
              *pcVar6 = '\0';
              DataMemoryBarrier(0xb);
              return 2;
            }
          }
          uVar7 = (*(code *)*puVar5)(iVar3);
          iVar3 = *(int *)(param_1 + 0xc);
          *(undefined8 *)(param_1 + 0xc) = uVar7;
          DataMemoryBarrier(0xb);
          *(undefined1 *)(param_1 + 0x14) = 0;
          DataMemoryBarrier(0xb);
          if (iVar3 == 0) {
            return 2;
          }
          (**(code **)(iVar3 + 4))(*(undefined4 *)(param_1 + 0x10));
          return 2;
        }
      } while (*piVar4 == local_24);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    *pcVar6 = '\0';
    DataMemoryBarrier(0xb);
  } while( true );
}

