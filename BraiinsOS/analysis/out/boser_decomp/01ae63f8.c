// FUN_01ae63f8 @ 01ae63f8 size=308 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_01ae63f8(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  undefined8 uVar7;
  
  pcVar5 = (char *)(param_1 + 0x14);
  puVar6 = (uint *)(param_1 + 8);
  do {
    do {
      DataMemoryBarrier(0xb);
      uVar3 = FUN_01ae6348(*puVar6);
      uVar3 = uVar3 & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar3) {
      default:
        DataMemoryBarrier(0xb);
        break;
      case 1:
        return 0;
      case 3:
        return 1;
      }
      do {
        cVar1 = *pcVar5;
        bVar2 = (bool)hasExclusiveAccess(pcVar5);
      } while (!bVar2);
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
    } while (cVar1 != '\0');
    if (*puVar6 == uVar3) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar6);
        if (bVar2) {
          *puVar6 = 2;
          DataMemoryBarrier(0xb);
          if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
            iVar4 = param_2[1];
          }
          else {
            iVar4 = param_2[1];
            if (*(int *)(param_1 + 0x10) == iVar4 &&
                *(undefined4 **)(param_1 + 0xc) == (undefined4 *)*param_2) {
              DataMemoryBarrier(0xb);
              *pcVar5 = '\0';
              DataMemoryBarrier(0xb);
              return 2;
            }
          }
          uVar7 = (**(code **)*param_2)(iVar4);
          iVar4 = *(int *)(param_1 + 0xc);
          *(undefined8 *)(param_1 + 0xc) = uVar7;
          DataMemoryBarrier(0xb);
          *(undefined1 *)(param_1 + 0x14) = 0;
          DataMemoryBarrier(0xb);
          if (iVar4 == 0) {
            return 2;
          }
          (**(code **)(iVar4 + 4))(*(undefined4 *)(param_1 + 0x10));
          return 2;
        }
      } while (*puVar6 == uVar3);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    *pcVar5 = '\0';
    DataMemoryBarrier(0xb);
  } while( true );
}

