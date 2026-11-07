// FUN_015fc984 @ 015fc984 size=112 calls_out=3 calls_in=1
// strings: std::process::exit called re-entrantly

void FUN_015fc984(void)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint unaff_r4;
  bool bVar6;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr15;
  undefined8 uVar7;
  int iStack_2c;
  uint uStack_28;
  int iStack_24;
  
  iVar1 = FUN_016d2bc8();
  iVar5 = DAT_018dd95c;
  do {
    if (DAT_018dd95c != 0) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_015fc9c8;
    }
    bVar6 = (bool)hasExclusiveAccess(0x18dd95c);
  } while (!bVar6);
  DataMemoryBarrier(0xb);
  bVar6 = true;
  DAT_018dd95c = iVar1;
LAB_015fc9c8:
  if (bVar6) {
    return;
  }
  bVar6 = iVar5 == iVar1;
  if (bVar6) {
    uVar7 = FUN_00fb7ebc("std::process::exit called re-entrantly");
    piVar4 = (int *)((ulonglong)uVar7 >> 0x20);
    puVar2 = (undefined1 *)uVar7;
    if (bVar6) {
      puVar2 = (undefined1 *)(unaff_r4 >> 0x1f ^ 0x15fc9ec);
    }
    coprocessor_function2(6,0xe,3,in_cr3,in_cr1,in_cr15);
    if (*piVar4 == 1) {
      iVar5 = piVar4[1];
      *puVar2 = 4;
      *(int *)(puVar2 + 4) = iVar5;
      return;
    }
    if (piVar4[3] == -1) {
      iVar5 = piVar4[2];
      iStack_2c = 0;
      while (iVar1 = FUN_016da356(iVar5,&iStack_2c,0), iVar1 == -1) {
        piVar3 = (int *)FUN_016d2bc8();
        if (*piVar3 != 4) {
          *(int *)(puVar2 + 4) = *piVar3;
          puVar2[3] = 0;
          *(undefined2 *)(puVar2 + 1) = 0;
          *puVar2 = 0;
          return;
        }
      }
      iStack_24 = iStack_2c;
    }
    else {
      FUN_015f05c4(&iStack_2c,piVar4[3],4);
      if (iStack_2c == 0) {
        if ((uStack_28 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("internal error: entered unreachable code: waitid with WEXITED should not return None"
                       ,0xa9,&DAT_018aad58);
        }
      }
      else if ((uStack_28 & 0xff) != 4) {
        *(int *)(puVar2 + 4) = iStack_24;
        *puVar2 = (char)uStack_28;
        puVar2[3] = (char)(uStack_28 >> 0x18);
        *(short *)(puVar2 + 1) = (short)(uStack_28 >> 8);
        return;
      }
    }
    *(int *)(puVar2 + 4) = iStack_24;
    *piVar4 = 1;
    piVar4[1] = iStack_24;
    *puVar2 = 4;
    return;
  }
  do {
    FUN_016e0196();
  } while( true );
}

