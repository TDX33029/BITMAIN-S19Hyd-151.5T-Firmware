// FUN_009d418c @ 009d418c size=200 calls_out=0 calls_in=2
// strings: 

bool FUN_009d418c(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined8 uVar6;
  
  pcVar3 = (char *)(param_1 + 0x1c);
  do {
    if (*pcVar3 == '\0') {
      bVar5 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar5) {
        *pcVar3 = '\x01';
        DataMemoryBarrier(0xb);
        cVar1 = *(char *)(param_1 + 0x28);
        DataMemoryBarrier(0xb);
        puVar2 = *(undefined4 **)(param_1 + 0x24);
        puVar4 = (undefined4 *)param_2[1];
        param_2 = (undefined4 *)*param_2;
        bVar5 = puVar2 == puVar4;
        if (bVar5) {
          puVar2 = *(undefined4 **)(param_1 + 0x20);
        }
        if (!bVar5 || puVar2 != param_2) {
          uVar6 = (*(code *)*param_2)(puVar4);
          (**(code **)(*(int *)(param_1 + 0x20) + 0xc))(*(undefined4 *)(param_1 + 0x24));
          *(undefined8 *)(param_1 + 0x20) = uVar6;
          if (cVar1 != '\0') {
            (*(code *)param_2[2])(puVar4);
          }
        }
        DataMemoryBarrier(0xb);
        *pcVar3 = '\0';
        return cVar1 != '\0';
      }
    }
    else {
      ClearExclusiveLocal();
    }
    while (*pcVar3 != '\0') {
      HintYield();
    }
  } while( true );
}

