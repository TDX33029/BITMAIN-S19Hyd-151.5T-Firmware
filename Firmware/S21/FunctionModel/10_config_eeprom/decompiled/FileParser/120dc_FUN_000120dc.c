// FUN_000120dc @ 000120dc  size=164  callers=1
// program: FileParser


undefined4
FUN_000120dc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00011490(param_2);
  uVar2 = FUN_00011490(param_2 + 8);
  uVar3 = FUN_00011490(param_2 + 0x10);
  uVar4 = FUN_00011490(param_2 + 0x18);
  FUN_00011fbc(param_1,(int)((ulonglong)uVar4 >> 0x20),(int)uVar1,(int)((ulonglong)uVar1 >> 0x20),
               uVar2,uVar3,uVar4,param_3,param_4,param_5,param_6);
  return param_1;
}

