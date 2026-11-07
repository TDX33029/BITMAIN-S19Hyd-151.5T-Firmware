// FUN_013e7b60 @ 013e7b60 size=164 calls_out=6 calls_in=1
// strings: 

undefined8 FUN_013e7b60(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar6 = *param_1;
  uVar5 = param_1[1];
  iVar7 = param_1[2];
  iVar1 = iVar7 * 0xf0;
  uVar8 = FUN_006665a4(4,iVar1);
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  puVar2 = (undefined4 *)uVar8;
  if (iVar4 == 0) {
    puVar3 = puVar2;
  }
  else {
    puVar3 = (undefined4 *)FUN_01298504(iVar4,puVar2);
  }
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(puVar2,iVar4);
  }
  *puVar3 = 1;
  puVar3[1] = 1;
  FUN_01bed4e2(puVar3 + 2,uVar5,iVar1);
  FUN_013e08bc(uVar5,0);
  FUN_013e6414(uVar6,uVar5,4,0xf0);
  return CONCAT44(iVar7,puVar3);
}

