// FUN_0164ec90 @ 0164ec90 size=252 calls_out=4 calls_in=80
// strings: 

bool FUN_0164ec90(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint extraout_r1;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_14;
  
  uVar8 = thunk_FUN_016de0ee(param_1,0x40);
  puVar7 = (uint *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
  if ((char)puVar7[0xe] != '\x01') {
    local_19 = 1;
    if ((char)puVar7[0xe] == '\x02') goto LAB_0164ecc0;
    FUN_015e8e6c(puVar7,FUN_01655ec4);
    *(undefined1 *)(puVar7 + 0xe) = 1;
  }
  uVar4 = *puVar7;
  if (uVar4 < 0x7fffffff) {
    uVar3 = puVar7[1];
    *puVar7 = uVar4 + 1;
    if (uVar3 != 2) {
      piVar5 = (int *)puVar7[2];
      do {
        iVar6 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar6 + 1;
      if (iVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x164ed50);
        (*pcVar1)();
      }
      *puVar7 = *puVar7 - 1;
      return (uVar3 & 1) != 0;
    }
  }
  else {
    FUN_00fb71b0(&DAT_018accb0);
    uVar4 = extraout_r1;
  }
  *puVar7 = uVar4;
  local_19 = 0;
LAB_0164ecc0:
  local_18 = &local_19;
  local_14 = &LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00590e71,&local_18,param_1);
}

