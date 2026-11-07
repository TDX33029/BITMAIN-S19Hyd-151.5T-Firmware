// FUN_01304100 @ 01304100 size=256 calls_out=2 calls_in=37
// strings: 

byte FUN_01304100(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  byte bVar1;
  undefined4 **ppuVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *local_20;
  byte local_1c;
  byte local_1b;
  
  iVar7 = param_6;
  iVar9 = param_5;
  if (param_5 != param_7) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&param_5,&param_7,0);
  }
  local_1c = (**(code **)(param_1[1] + 0xc))(*param_1);
  local_1b = 0;
  puVar8 = (undefined4 *)(param_4 + 4);
  ppuVar2 = &local_20;
  local_20 = param_1;
  do {
    ppuVar2 = (undefined4 **)FUN_01302c38(ppuVar2,puVar8[-1],*puVar8,iVar7,&LAB_012fff3c);
    puVar8 = puVar8 + 2;
    iVar7 = iVar7 + 8;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  bVar1 = local_1b | local_1c;
  if (local_1b == 1 && (local_1c & 1) == 0) {
    if ((*(byte *)((int)local_20 + 10) & 0x80) == 0) {
      uVar3 = *local_20;
      uVar5 = 2;
      pcVar6 = *(code **)(local_20[1] + 0xc);
      pcVar4 = " }AlertMessagePayloadChangeCipherSpecPayload\x0e";
    }
    else {
      uVar3 = *local_20;
      uVar5 = 1;
      pcVar6 = *(code **)(local_20[1] + 0xc);
      pcVar4 = "}";
    }
    bVar1 = (*pcVar6)(uVar3,pcVar4,uVar5);
  }
  return bVar1 & 1;
}

